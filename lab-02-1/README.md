# Lab 2.1: C Libraries, Linking, and ELF

I used this folder to compile the `procinfo` C program and compare static and dynamic ELF executables in Ubuntu on WSL.

## Files

- `brief/Lab_2.1.pdf` is the original lab brief.
- `src/procinfo.c` is the C source from the brief.
- `outputs/` contains the raw WSL command output.
- `screenshots/` contains the terminal captures for the walkthrough.
- `report.md` records the commands and observed results.

## Compile and run

```sh
cd lab-02-1/src
gcc procinfo.c -o procinfo
./procinfo
```

The static and dynamic comparison builds were made with:

```sh
gcc -static procinfo.c -o procinfo_static
gcc procinfo.c -o procinfo_dynamic
```
