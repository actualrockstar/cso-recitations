# CSO Cheat Sheet

This file **CSO Cheat Sheet** emphasizes important course logistics and
instructions on using virtual machine and the Software called "Git", which
everyone in the class must follow throughout the semester.

I, XXX, understand that this document **MUST** be signed following the
instructions in [r01/README.md](README.md) as a condition of enrollment in
CSCI-UA.0201-001.

By signing the document, I, XXX, confirm that I can access this document using
this
[link](https://github.com/nyu-cso-sp19/recitations-XXX/blob/master/r01/CSO_CHEAT_SHEET.md).
And I confirm that I have read the document carefully to understand the course
logistics and Git instructions. In the future, if I encounter similar issues
listed in this document, I, XXX, will strictly follow the instructions
specified below. 

I, XXX, understand that failure in following the instructions listed in this
document in any lab or recitation may result in at least 20% of penalty or
complete loss of scores of that lab or recitation. If I have any further
questions, I'll ask on Piazza or email cso-staff mailing list at
[cso-staff@cs.nyu.edu](mailto:cso-staff@cs.nyu.edu).

## Logistics
1. This class CSCI-UA.0201-001 uses **Piazza website** to make all
   course announcements (in the form of **Instructor's Note** on Piazza,
   accompanied with an email notification from Piazza). Therefore, I, XXX,
   confirm that I have access to, and have enrolled in Piazza course site. And
   I, XXX, will carefully read and follow all future **Instructor's Notes**.
   * In the case that I missed or did not follow announcements which later
     leads to loss in my scores, I, XXX, understand and agree that would be
     sheerly my responsibility.
2. The deadline for every lab and recitation is 11:00 PM ET of the due date.
Any late submission will not be considered.
   * For example, if I, XXX, submit at 11:01 PM ET, I understand that this
     submission may be ignored.
   * I am aware that I may use grace days to extend my deadline for labs, and
     I only have 5 grace days in total.
3. All recitation deadlines will be Wednesday 11:00 PM ET. Grace day policy
does **NOT** apply to recitations.
4. For all labs, recitations, and quizzes, the scores will be released through
NYU Classes website. CSO graders will make an announcement on Piazza when the
scores are ready. I, XXX, understand that I must check my grades immediately
after scores are released, and if I have any questions about the grading, I
must contact CSO staffs **within two weeks** after the grade release day.
   * Any request sent outside the two-week window may be ignored.
5. I, XXX, understand that the only way to contact CSO staffs to ask private
questions, make appointments, and request regrading is to send an email to
cso-staff mailing list at [cso-staff@cs.nyu.edu](mailto:cso-staff@cs.nyu.edu).
   * I, XXX, understand that even if I get verbal promise from instructors in
     class, I need to send an email to cso staff mailing list to get it
     confirmed and also to inform other CSO staffs.
6. Instructions on how to use grace days for labs will later be posted on
Piazza. I, XXX, will strictly follow the instructions to request grace days.
In the future, any grace day request with an incorrect format will be ignored. 
7. When doing labs, I, XXX, will carefully read and follow the lab
instructions on the course website. Especially, 
   * I, XXX, will strictly follow the required output format (if any). If I
     don't understand the output format, I'll ask on Piazza.
   * I, XXX, will only modify the files which the instructions allow us to
     modify. I understand that all files that are not allowed to change will
     be reset during the grading.
8. Integrity Policy:
   * I, XXX, have read through the Integrity Policy on Lab instruction page,
     and promise never to plagiarize. If I have questions about what might be
     considered plagiarism, I will contact CSO staffs for clarification.
   * I understand that the punishment for cheating in labs or quizzes will be
     receiving an F for the course and get reported to the department.

## Virtual machine instructions
To prevent the repositories from corruption, I, XXX, will type the command
`sync` in the Virtual Machine every time I finish (or even I just want to take
a break during) my work.

To prevent corruption, I, XXX, will never directly use VirtualBox's "power
off" option. Whenever I want to shutdown or restart my virtual machine, I will
do it inside the virtual machine. 

## GIT Troubleshooting Instructions
I can learn how to use GIT from this [Git
tutorial](https://try.github.io/levels/1/challenges/1). I can learn branching
related knowledge from [Learning Git
branching](https://learngitbranching.js.org/) but I understand I don't need to
and should not use advanced git features in CSO lab / recitations.

If I, XXX, encounter git problems not listed below and I don't know for sure
how to fix it, I will go to office hour and ask for help.

### What I **MUST** do?
1. I, XXX, know that for every submission, I need to `git add` all changed or
   newly created files so that git knows to track them. And then I need to
   `git commit` all changes, and finally `git push` to submit all changes to
   GitHub.
2. I, XXX, will always uses `git status` command to check that all my changes
   have been committed. And, I will always go to GitHub website to triple
   check and make sure all my changes are reflected on GitHub.
3. I, XXX, will constantly (preferably on a daily basis) commit and push my
work in process to GitHub to make sure that my repository is in good state.
   * I know that if `git commit` or `git push` outputs error messages, that
     could indicate my git repository is not in a consistent state. And I will
     immediately fix the problem by myself or turn to CSO staff for help.

### What I must **NOT** do?
1. I, XXX, will **NEVER** use `git add .` and `git add *`. Instead, I should
   always specify what files I want to commit, e.g., `git add e1.c e2.c e3.c`.
2. I, XXX, will **NEVER** edit files through GitHub website. I understand that
   GitHub website for the CSO repository is considered read only. I should
   only use GitHub website to make sure all my changes have been correctly
   submitted.

### Initialize recitations repository
1. `git clone https://github.com/nyu-cso-sp19/recitations-XXX`
2. `cd recitations-XXX`
3. `git remote add upstream https://github.com/nyu-cso-sp19/cso-recitations`
4. `git pull upstream master`
5. `git remote -v`

The output should be  

```
origin  https://github.com/nyu-cso-sp19/recitations-XXX (fetch)
origin  https://github.com/nyu-cso-sp19/recitations-XXX (push)
upstream        https://github.com/nyu-cso-sp19/cso-recitations (fetch)
upstream        https://github.com/nyu-cso-sp19/cso-recitations (push)
```

### Initialize labs repository
1. `git clone https://github.com/nyu-cso-sp19/labs-XXX`
2. `cd labs-XXX`
3. `git remote add upstream https://github.com/nyu-cso-sp19/cso-labs`
4. `git pull upstream master`
5. `git remote -v`  

The output should be: 

```
origin  https://github.com/nyu-cso-sp19/labs-XXX (fetch)
origin  https://github.com/nyu-cso-sp19/labs-XXX (push)
upstream        https://github.com/nyu-cso-sp19/cso-labs (fetch)
upstream        https://github.com/nyu-cso-sp19/cso-labs (push)
```

### How to fix the repository when it is corrupt?
When performing any GIT command and getting a message like the figure,
![](https://dl.dropboxusercontent.com/s/nzns3atmyzoaist/corrupt.png?dl=0) I'll
do following instructions to fix the problem. (Change "labs" to "recitations"
in the command if dealing with recitations)

1. I'll first backup the folder 
   * change to the directory which the repository is in, usually with the
     command `cd ..`
   * backup with command `mv labs-XXX labs-XXX-backup`
2. After I back up the folder, I'll clone a fresh copy of my repository
following instructions in above **Initialization recitations/labs repository** 
   * I will issue all the commands listed, especially those that set up and
     pull upstream repository
3. Copy the files I already modified from labs-XXX-backup back to labs-XXX. I
can only copy modified C files (.c, .h) back to the newly initialized folder.
   * **Attention:** nothing in the `.git` folder should be copied to your new
     folder.
4. I will never use the old repository labs-XXX-backup again. Or I can
optionally delete the folder labs-XXX-backup.

### How to fix labs/recitations repository when there are conflicts?
When performing any GIT command and I get a message like the figure,
![](https://dl.dropboxusercontent.com/s/51abl9rx802b9ts/conflict.png?dl=0)
I'll do following instructions to fix the problem.

1. I'll first type the command `git status`. The command will show me
   conflicted files (marked with the string "both modified")
2. I'll edit those files one by one. For each file that has conflicts, I will
do the following:
   * remove unwanted lines, e.g. <<<<, >>>>, HEAD and any other conflicted
     lines
   * `git add` the file.
3. Then I will issue `git commit`. If the command shows that there are still
some conflict. I'll repeat from step 2.
   * When doing `git commit` there may be a new window which pops out, showing
     me some comments. Simply hit `ctrl+x` to leave the window.
4. Finally, I have to do the command `git push origin master`.

### How to deal with the merge message.
When doing `git pull upstream master` for ether lab or recitation repository
and I get a message like the figure,
![](https://dl.dropboxusercontent.com/s/b3dvxkw4hel90hg/merge.png?dl=0)

I'll hit `ctrl+x`. 
