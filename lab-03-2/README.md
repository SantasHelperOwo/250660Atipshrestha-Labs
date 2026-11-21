# Lab 3.2: BSS, heap and stack with GDB

This lab uses GDB to inspect the process memory regions used by a global BSS variable, a local stack variable, and dynamically allocated heap memory.

## Files

- `brief/OS_3.2_Lab.pdf`
- `src/demo.c`
- `outputs/01-build.txt`
- `screenshots/`

## Build and debug

From `src/`, build with debugging symbols:

```sh
gcc -g demo.c -o demo
```

Start GDB and stop before the inspection message:

```sh
gdb ./demo
(gdb) break 23
(gdb) run
(gdb) info proc mappings
```
