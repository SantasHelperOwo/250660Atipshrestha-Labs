#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int global_initialized = 150;
int global_uninitialized;

int main(void) {
    int local_var = 30;
    static int local_static = 20;
    int *heap_var = malloc(sizeof *heap_var);
    if (heap_var == NULL) {
        perror("malloc");
        return 1;
    }
    *heap_var = 500;

    uintptr_t stack_address = (uintptr_t)(void *)&local_var;
    uintptr_t heap_address = (uintptr_t)(void *)heap_var;
    uintptr_t difference = stack_address >= heap_address
        ? stack_address - heap_address
        : heap_address - stack_address;
    uintptr_t addresses[] = {
        (uintptr_t)(void *)&global_initialized,
        (uintptr_t)(void *)&global_uninitialized,
        (uintptr_t)(void *)&local_var,
        (uintptr_t)(void *)&local_static,
        (uintptr_t)(void *)&heap_var,
        (uintptr_t)(void *)heap_var
    };
    const char *names[] = {
        "global_initialized", "global_uninitialized", "local_var",
        "local_static", "heap_var", "*heap_var"
    };
    const char *segments[] = {"Data", "BSS", "Stack", "Data", "Stack", "Heap"};
    size_t lowest_index = 0;
    size_t highest_index = 0;
    for (size_t i = 1; i < sizeof addresses / sizeof addresses[0]; i++) {
        if (addresses[i] < addresses[lowest_index]) {
            lowest_index = i;
        }
        if (addresses[i] > addresses[highest_index]) {
            highest_index = i;
        }
    }

    printf("Variable addresses by segment\n");
    printf("global_initialized:   %p (Data, initialized global)\n", (void *)&global_initialized);
    printf("global_uninitialized: %p (BSS, uninitialized global)\n", (void *)&global_uninitialized);
    printf("local_var:            %p (Stack, local variable)\n", (void *)&local_var);
    printf("local_static:         %p (Data, initialized static local)\n", (void *)&local_static);
    printf("heap_var:             %p (Stack, pointer variable)\n", (void *)&heap_var);
    printf("*heap_var:            %p (Heap, allocated integer)\n", (void *)heap_var);
    printf("Highest address:      %s (%s, %p)\n", segments[highest_index],
           names[highest_index], (void *)addresses[highest_index]);
    printf("Lowest address:       %s (%s, %p)\n", segments[lowest_index],
           names[lowest_index], (void *)addresses[lowest_index]);
    printf("Stack-to-heap difference: 0x%" PRIxPTR " (%" PRIuPTR " bytes)\n",
           difference, difference);

    free(heap_var);
    return 0;
}
