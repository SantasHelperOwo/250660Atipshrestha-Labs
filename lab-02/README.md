# Lab 2: Investigating Process Lifecycles and OS Interaction

This lab contains five C programs covering process lifecycles, process identity, exit status, and standard input and output.

## Files

- `src/task1_alive.c`
- `src/task2_identity.c`
- `src/task3_exit.c`
- `src/task4_input.c`
- `src/task5_control.c`
- `brief/Lab_2.pdf`
- `outputs/` contains the raw output logs.
- `screenshots/` contains terminal captures for the task runs.
- `report.md` records the commands, results, and explanations.

## Compile and run

From this directory in Ubuntu on WSL, I compiled and ran Task 1 with:

```sh
cd src
gcc task1_alive.c -o task1
./task1 &
ps aux | grep task1
```
