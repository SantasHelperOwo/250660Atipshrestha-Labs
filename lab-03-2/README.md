# Lab 3.2: BSS, heap and stack with GDB

I used the supplied C program to inspect a global BSS variable, a local stack variable, and dynamically allocated heap memory in GDB.

## Files

- `brief/OS_3.2_Lab.pdf` — original lab brief
- `src/demo.c` — Listing 1 source
- `outputs/01-build.txt` — compile command
- `outputs/shots/` — terminal text transcribed from the numbered screenshots
- `screenshots/` — terminal evidence in lab order
- `report.md` — results, address-range table, and post-lab answers

## Build and inspect

From `src/`, I compiled and ran the program with:

```sh
gcc -g demo.c -o demo
gdb ./demo
```

In GDB, I set `break 23`, ran the program, and inspected the sections and live mappings with `info files` and `info proc mappings`. The breakpoint resolved to line 24, the `printf` statement immediately after the comment on line 23.

The recorded sessions and results are in [report.md](report.md).
