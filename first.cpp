#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World";
    return 0;
}


// NoTes

/*
TO CHECK VERSION
1. git --version


SETUP

1. git config --global user.name “[firstname lastname]”

2.  git config --global user.email “[valid-email]”

3. shows credentials entered
git config --list



CLONE AND STATUS

1. git clone <-some link->

2. displays the state of code..
git status

3. diffrent status

untracked
new files that git doesn't yet track

modified
changed

staged
file is ready to be committed

unmodified
unchanged




ADD and COMMIT


1. add - adds new or changed files in your working directory to the Git staging area.
git add <- file name ->

2. commit - it is the record of change
git commit -m "some message"


PUSH COMMAND

1. push - upload local repo content to remote repo
git push origin main

ORIGIN is a name of copy of the repo
MAIN is the branch name

INIT COMMAND

init - used to create a new git repo

1. initialize an existing directory as a Git repository
git init

git remote add origin <-link->
git remote -v (to verify remote)
(to check branch)
git branch
git branch -M main (to rename branch)
git push origin main




TERMINAL COMMANDS

1. cd
2. cd <file name>
3. clear - clears screen
4. ls - lists all folders
5. ls -a -> list all folders and hidden folders as well
6. cd .. -> to come out of folder
7. mkdir <folder name> -> to make a new folder

*/