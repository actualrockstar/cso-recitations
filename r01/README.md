# Computer Systems Organization : Tutorial 1

- [Setup Class Virtual Machine](#setup-class-virtual-machine)
- [Basic Command Line Usage](#basic-command-line-usage)
- [Editor](#editor)
- [Version Control](#version-control)
- [Grades For Recitations](#grades-for-recitations)
- [CSO Cheat Sheet](#cso-cheat-sheet)
- [Exercise For Today](#exercise-for-today)

# Setup Class Virtual Machine
In order to make sure every student uses the same environment to do labs and
recitation exercises, we ask you to install VirtualBox 5.2.24 and set up our
class lubuntu 16.04 virtual machine following [this
link](https://nyu-cso.github.io/labs/)

# Basic Command Line Usage

Most of you are used to interacting with computers and smartphones by GUI and
the touch interface.  As a developer / programmer / advanced user, you can do
your job more efficiently by mastering the command line interface.  In UNIX,
most of the interesting things you want to do can be accomplished by
skillfully combining various commands.  

Your lab virtual machine is a Linux distribution.  If you are using MacBook,
your MacOS is based on BSD UNIX.  Most UNIX commands you learn apply to both,
but there are variations.

Please read this [guide on using UNIX
commands](https://github.com/jlevy/the-art-of-command-line). Below is a short
list of the most basic commands you will use on a day to day basis:

* `man`
* `ls`
* `cd` `pwd`
* `mkdir`
* `cp` `mv` `rm`
* `echo` `cat`
* `wc`
* `grep`
* `ctrl-c` `ctrl-z` `fg` `bg`
* `|` `>` `<`
* `history` `ctrl-r`
* `apt install` `apt search` (This is a Linux-distribution specific command,
  and hence not available on Mac or other non-Ubuntu based distributions; for
  Mac, a similar package manager called Brew exists)

Despite attending this recitation, many times you will have questions about
"how do I do this?" "is there a command for doing X?".  The answer to all of
these questions can usually be discovered by Googling. Click on those
StackOverflow links.  It has many helpful answers.

**Please always Google your question first before asking any program
environment (Linux, VIM/Emacs and Git) questions on Piazza. Most of the time,
what you need are some specific commands and/or options.**


# Editor
You've probably all learned programming using IDE, which packages up the whole
development process, i.e. writing the code, turning it into something
runnable, and actually running and debugging into one graphically appealing
bundle. The UNIX people do things differently.  We tend not to use IDE, but
rather, we use separate tools for each of these development steps.

You **have to** learn to use one editor, either `vim`, `emacs` or `sublime`. 

We recommend you to use command line editors like `vim` and `emacs`. If this
is your first time using UNIX-like systems and command lines, you may find it
very painful. To ease your pain, use `sublime` to do all your labs and
recitations.

To install `sublime`, type "sudo apt install sublime-text". `Sublime` is
intuitive to learn and you can find documentations / tutorials online.

# Version control

Version control systems manage changes to documents, source files and other
collections of information, which helps you:

- see what changes you or others made 
- roll back to older version
- collaborate and synchronize with others
- etc.

Throughout the semester, we will be using `git`, developed by Linus Torvalds.
You can read this [git tutorial](https://www.atlassian.com/git/tutorials) or
[this one](https://try.github.io/levels/1/challenges/1).

Please check out the recitation slide for `git` instructions.

**Please do not post any code in this class on a Github public repo (or
anywhere public)**


# CSO Cheat Sheet
We provide you a [cheat sheet](./CSO_CHEAT_SHEET.md) under `r01/` directory.
You are required to read through it carefully.

You **MUST** sign the cheat sheet by changing **ALL** `XXX` to your own GitHub
username (including those in URL links or in bash commands).

**Attention:** You must replace all `XXX` with your GitHub username. It's the
username you use to login GitHub website and it's case sensitive. Do **NOT**
replace with your name, your University ID, your NetID, or anything else.

You **MUST** commit and push your signed cheat sheet to your remote GitHub
repository. 

If you don't know how to submit, you should read through the recitation slide
again.


# Exercise For Today
Here is what you **MUST** do to get full marks for recitation 01:

* read through the recitation slides carefully
* read through `CSO_CHEAT_SHEET.md` carefully
* sign the `CSO_CHEAT_SHEET.md`
* submit your signed document to GitHub using the following commands
  * `git add CSO_CHEAT_SHEET.md`
  * `git commit -m "submit cso cheat sheet"`
  * `git push origin master`

### Due: Feb 6th, 2019 11:00 p.m.
All future recitation exercises will be due one day after the recitation. But
for recitation 01, you have one week to carefully go through the [CSO Cheat
Sheet](./CSO_CHEAT_SHEET.md).
