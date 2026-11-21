# Lab 3.1: Text and initialized data segments

I used this folder to compile the supplied C program in Ubuntu on WSL and inspect its text and initialized data sections with GDB.

## Files

- `brief/OS_3.1_Lab.pdf` is the unchanged lab brief.
- `src/demo2.c` contains Listing 1 from the brief.
- `outputs/` contains the compiler, debugger, section-range, environment and `readelf` logs.
- `screenshots/` contains the terminal captures for the build, breakpoint, section map, data inspection, mappings, disassembly, exit and ELF program headers.
- `report.md` contains the method, results, address matrix and analysis.

## Compile and debug

From `lab-03-1/src` in Ubuntu on WSL, I ran:

```sh
gcc -g demo2.c -o demo2
gdb ./demo2
```

At the GDB prompt, I set the requested breakpoint and ran the program:

```gdb
break 22
run
```

I inspected the sections and data with `info files` and the print/examine commands in the report. I checked process mappings and disassembly before continuing and quitting GDB. After GDB exited, I inspected the ELF program headers with:

```sh
readelf -lW demo2
```
