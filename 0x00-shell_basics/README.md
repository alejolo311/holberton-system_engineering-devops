# 0x00 Shell Basics

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

This project contains some of the simplest and most important commands for the basic use of Linux

# Objectives
 - How to navigate the filesystem.
 - How do you use options and arguments with commands.
 - What are wildcards and how do they work.
 - understand the commands that allow the basic use of a UNIX based system.
# Requirements
>1 - All your scripts should be exactly two lines long ($ wc -l file should print 2).
>2 - You are not allowed to use backticks, &&, || or ;
>3 - All your scripts must be executable.
# Tasks
**0-current_working_directory**
Write a script that prints the absolute path name of the current working directory.
```sh
#!/bin/bash
pwd
```
**1-listit**
Write a script that display the contents list of your current directory.
```sh
#!/bin/bash
ls
```
**2-bring_me_home**
Write a script that changes the working directory to the users home directory.
-  not allowed use any shell variables
```sh
#!/bin/bash
cd
```
**3-listfiles**
Write a script that display current directory contents in a long format.
```sh
#!/bin/bash
ls -l
```
**4-listmorefiles**
Display current directory contents, including hidden files (starting with .). Use the long format.
```sh
#!/bin/bash
ls -la
```
**5-listfilesdigitonly**
Display current directory contents.
- Long format
- with user and group IDs displayed numerically
- And hidden files (starting with .)
```sh
#!/bin/bash
ls -na
```
**6-firstdirectory**
Create a script that creates a directory named holberton in the /tmp/ directory.
```bash
#!/bin/bash
mkdir /tmp/holberton/
```
