
# Computer Systems Organization : Tutorial 2

- [Basic UNIX](#basic-unix-usage)
- [Compile](#compile)
- [Debug](#debug)
- [Exercise for today](#what-to-submit-for-today)

# Basic UNIX usage

Please read this [guide](https://github.com/jlevy/the-art-of-command-line) on
using UNIX commands.

# Compile

We use the C compiler **GCC** (short for GNU Compiler Collection) to compile C
programs.  GCC, as well as many key pieces of development software (e.g. the C
library, make), is developed by [GNU](http://www.gnu.org/). That's why you
hear people sometimes refer to GNU/Linux since strictly speaking, Linux is
just the kernel of the OS and not the complete system.

To compile a simple source file written in C, say `hello.c`, type `gcc
hello.c`. This generates an executable `a.out`. Then you can execute it by
typing `./a.out`. If you want to compile the program to a different name, use
the `-o` option: `gcc -o hello hello.c`

Typically, compiling large project is complicated and we do not directly type
`gcc` to compile programs. There are some of the reasons:

- Compiling command is long and sophisticated
- Need to compile many source files individually and combine them into one
  executable
- Different files may need different compiling options
- Obey file dependencies during compilation
- Avoid recompiling for files that have not changed
- Utilize multi-core machine and compile multiple files in parallel

To address all above problems, we use a classic tool called `make`, developed
by GNU. To use `make`, you need to write a Makefile.  The meat of a Makefile
consists of a bunch of rules.  Here's what a rule looks like

```
target: dependency1 dependency2
	commands
```

In this repo, we have a Makefile that compiles `main.c` and `foo.c` into
`main`:

```
main: foo.o main.o
	gcc -o main foo.o main.o
main.o: main.c
	gcc -c main.c
foo.o: foo.c
	gcc -c foo.c
clean:
	rm -f foo.o main.o main
```
**Question:**  type `make`, what is the order of the commands being run? Why?

To make writing such rules more succinct, you use variables and do [pattern
matching](https://www.gnu.org/software/make/manual/html_node/Pattern-Match.html)
in Makefile.

- Define variables as `FILES:=file1 file2`, use it later as `$FILES`

There are several important [automatic
variables](https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html).

- `$@` (target name)
- `$^` (name of all prerequisites, i.e. dependencies)
- `$<` (name of the first prerequisite)
- Pattern-matching using `%` and `*`. As an example:

```
  %.b: %.a
       cp $*.a $*.b
```
Above rule copies any file with suffix `.a` into another file with the same
name except having suffix `.b`

### Exercise 1 (Makefile with pattern matching and variables)

Rewrite the given Makefile using pattern matching and variables. Make it as
clean and re-usable as possible.

- use pattern matching and automatic variables as much as possible
- foo.o, main.o, foo.c, main.c should **NOT** appear in rules

# Debug

The debugger for C/C++ is `gdb`, developed by GNU, again.  In order to use
gdb, we need to compile the source code using the `-g` flag to include
appropriate debug information in the generated binary files. An example, `gcc
-c -g foo.c`.

My foo program is buggy, and does not even terminate! To debug, type `gdb
foo`.  The most basic gdb commands are: (I give their shortcut form)

- `r` (run the program)
- `bt` (print out the stack, i.e. where in the program's execution it is being
  stopped at)
- `l` (print lines from the relevant source file)
- `p <variable name>` (print out the content of the variable)
- `b` (set breakpoints, e.g. `b foo.c:7` stops the program when it is about to
  execute line 7 at foo.c
- `n` (execute a single statement. If the statement is a function call,
  execute the entire function and return to the statement just after the call;
  that is, step over the function) 
- `s` (execute a single statement. If the statement is a function call, just
  single step into the function)
- `c` (continue execution)
- `q` (quit, exit gdb)

To learn more about `gdb`, here are some useful links:

- [Learning C with gdb](https://www.recurse.com/blog/5-learning-c-with-gdb)
- [A Youtube video on gdb](https://www.youtube.com/watch?v=xQ0ONbt-qPs)
   
### Exercise 2 (Debug foo.c)

- Modify your Makefile to include the `-g` flag

- Use gdb to debug `foo.c`, which is supposed to calculate and print the sum
  from 1 to 10 (how can you interrupt foo while it is running?)


# What to submit for today
1. Makefile (with all changes required by exercise 1, 2)
2. foo.c (with the bug fixed)
3. signed r01/CSO_CHEAT_SHEET.md

Don't commit in any other file, especially binary/target files (e.g. `*.o`,
main)

Don't forget to use `git` to submit your recitation 02 to GitHub

**Due: Feb 6, 2019 11 PM**
