# Lab 3: Data Types and OS Memory Management

I used this folder to run the three supplied C listings and both exercises in Ubuntu on WSL. The report records the commands, observed output, memory layout and terminal screenshots.

## Files

- `brief/OS_3_Lab.pdf` is the original brief.
- `src/listing1_sizes.c`, `src/listing2_addresses.c` and `src/listing3_pointer.c` are the supplied listings.
- `src/exercise1_sizes.c` and `src/exercise2_segments.c` are the exercise programs.
- `outputs/` contains raw WSL output logs.
- `screenshots/` contains terminal captures for the compile and run steps.
- `report.md` records the method and observations.

## Compile and run

From `lab-03/src` in Ubuntu on WSL, I compiled and ran Exercise 1 with:

```sh
gcc -Wall -Wextra exercise1_sizes.c -o exercise1_sizes
./exercise1_sizes
```

I compiled and ran Exercise 2 with:

```sh
gcc -Wall -Wextra exercise2_segments.c -o exercise2_segments
./exercise2_segments
```
