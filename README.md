# Operating Systems Lab Work

C programs and reports for five operating-systems labs, run in Ubuntu on WSL.

## Labs

- [Lab 2: Process Lifecycles](lab-02/) · [report](lab-02/report.md) · [screenshots](lab-02/screenshots/)
- [Lab 2.1: C Libraries, Linking and ELF](lab-02-1/) · [report](lab-02-1/report.md) · [screenshots](lab-02-1/screenshots/)
- [Lab 3: Data Types and Memory](lab-03/) · [report](lab-03/report.md) · [screenshots](lab-03/screenshots/)
- [Lab 3.1: Text and Initialized Data](lab-03-1/) · [report](lab-03-1/report.md) · [screenshots](lab-03-1/screenshots/)
- [Lab 3.2: BSS, Heap and Stack](lab-03-2/) · [report](lab-03-2/report.md) · [screenshots](lab-03-2/screenshots/)

## Compile examples

Run these from Ubuntu on WSL. Each example uses a source file in that lab's `src/` folder.

### Lab 2

```sh
cd lab-02/src && gcc task1_alive.c -o task1
```

### Lab 2.1

```sh
cd lab-02-1/src && gcc procinfo.c -o procinfo
```

### Lab 3

```sh
cd lab-03/src && gcc -Wall -Wextra exercise1_sizes.c -o exercise1_sizes
```

### Lab 3.1

```sh
cd lab-03-1/src && gcc -g demo2.c -o demo2
```

### Lab 3.2

```sh
cd lab-03-2/src && gcc -g demo.c -o demo
```
