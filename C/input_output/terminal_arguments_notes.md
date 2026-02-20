# Terminal Arguments in C

## What Are Terminal Arguments?

When you run a program with arguments:

```bash
./ex5 This is my first time using terminal arguments
```

Output:

```
The number of arguments in this program is: 9

Argument 0: ./ex5
Argument 1: This
Argument 2: is
Argument 3: my
Argument 4: first
Argument 5: time
Argument 6: using
Argument 7: terminal
Argument 8: arguments
```

- `argc` — the count of arguments (including the program name)
- `argv[]` — an array of strings containing each argument

---

## Common Uses for Command-Line Arguments

### 1. File Processing

```bash
gcc -o myprogram main.c          # input/output files
cp source.txt destination.txt
cat file1.txt file2.txt
```

### 2. Configuration Flags

```bash
ls -l -a                         # modify behavior
python server.py --port 8080
git commit -m "message"
```

### 3. Modes of Operation

```bash
docker build .                   # subcommands
docker run container
git push origin main
```

### 4. Batch/Automation Scripts

```bash
# A backup script that takes a directory
./backup.sh /home/user/documents
# Process 100 files in a loop
for f in *.csv; do ./process "$f"; done
```

### 5. Filters and Search

```bash
grep "error" logfile.txt
find /home -name "*.c"
```

### 6. User Input Without Interactive Prompts

```bash
# Instead of asking the user questions one by one,
# everything is provided upfront — great for scripting
./create_user --name "John" --role admin --email john@example.com
```

> **Why it matters:** Terminal arguments let programs be **non-interactive**, which means they can be chained together, automated in scripts, and run by other programs — a core principle of Unix design. An interactive prompt (`scanf`, etc.) requires a human sitting there; arguments don't.

---

## How to Use Argument Data Inside Your Program

### 1. Use Arguments as Configuration

```c
// ./ex5 output.txt
FILE *f = fopen(argv[1], "w");  // open file named by user
fprintf(f, "Hello!\n");
fclose(f);
```

### 2. Convert to Numbers and Compute

```c
// ./calculator 10 + 5
#include <stdlib.h>
int a = atoi(argv[1]);   // "10" → 10
int b = atoi(argv[3]);   // "5"  → 5
printf("%d + %d = %d\n", a, b, a + b);
```

### 3. Compare Strings to Change Behavior

```c
// ./ex5 --verbose
#include <string.h>
int verbose = 0;
if (argc > 1 && strcmp(argv[1], "--verbose") == 0) {
    verbose = 1;
}
if (verbose) printf("Debug: detailed info here\n");
```

### 4. Process Multiple Files

```c
// ./ex5 file1.txt file2.txt file3.txt
for (int i = 1; i < argc; i++) {
    printf("Processing: %s\n", argv[i]);
    FILE *f = fopen(argv[i], "r");
    // ... read and process each file
    fclose(f);
}
```

### 5. Simple grep-like Tool

```c
// ./search "hello" myfile.txt
char *keyword = argv[1];
char *filename = argv[2];
// open file, read lines, print lines containing keyword
```

> **Key insight:** `argv[i]` is just a `char*` string. You can pass it to `atoi()` to make it a number, `strcmp()` to compare it, `fopen()` to open a file with that name, or store it in a variable for later use. The arguments become **input data** your program works with at runtime.
