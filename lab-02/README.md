# Lab 2: Investigating Process Lifecycles and OS Interaction

I wrote five C programs to inspect process identity, wait during execution, return exit statuses, read standard input, and branch on user input.

## Files

- `src/task1_alive.c`
- `src/task2_identity.c`
- `src/task3_exit.c`
- `src/task4_input.c`
- `src/task5_control.c`
- `brief/Lab_2.pdf`
- `report.md`
- `outputs/` contains the raw output from each task run.
- `screenshots/` contains terminal captures for the compile and verification steps.

## Compile and run

From this directory in Ubuntu on WSL, I compiled and ran Task 1 with:

```sh
cd src
gcc task1_alive.c -o task1
./task1 &
ps aux | grep task1
```
