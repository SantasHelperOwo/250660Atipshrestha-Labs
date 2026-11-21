# Operating Systems Lab Work

This repository contains C programs and walkthroughs for Operating Systems labs, run on Linux with Ubuntu in WSL.

Student: Atip Shrestha  
Student ID: 250660  
Softwarica College of IT & E-Commerce (in collaboration with Coventry University)

## Labs

- [Lab 2](lab-02/)
- [Lab 2.1: C Libraries, Linking, and ELF](lab-02-1/)
- [Lab 3: Data Types and OS Memory Management](lab-03/)

## Lab 2 compile and run

```sh
cd lab-02/src
gcc task1_alive.c -o task1
./task1 &
ps aux | grep task1
```

## Lab 3 compile and run

```sh
cd lab-03/src
gcc -Wall -Wextra exercise1_sizes.c -o exercise1_sizes
./exercise1_sizes
gcc -Wall -Wextra exercise2_segments.c -o exercise2_segments
./exercise2_segments
```

## Folders

`lab-02/` contains the process-management lab files. `lab-02-1/` contains the C libraries and ELF walkthrough, its original brief, output logs, screenshots, source, and report.
