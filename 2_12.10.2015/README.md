Tasks
=====================

Okay, folks. Now that we've learned some basic things abouts C++, it's time for a bit of a practice. Take a look at the tasks below.
The second task might require additional research from you.

### Task 1: Variables changer
Task: Write a program which asks the user to enter values for two variables of type integer. After that the program should swap their values.
Here is a little example what exactly should happen.

Input: 
```
	a = 21, b = 18
```
Output: 
```
	"The current value of a is 18"
	"The current value of b is 21"
```


### Task 2: Terminal master

Write a shell (terminal or cmd script) which:
* displays the "Hello world" message
* creates new folder named "create_me"
* renames the "create_me" folder to "delete_me"
* deletes the "delete_me" folder
* displays the username which is currently logged in on the computer
* displays the internet stats menu
* exits the shell

This one is a little bit more hardcore. You're going to need some additional materials.
 * Windows users should check this link: http://ss64.com/nt/
 * Linux users will have to look here: http://ss64.com/bash/

In order to make make the script you will need text editor to write the commands in a file.
And what about saving it?
 * Windows users should save it with ".cmd" extension
 * Linux users don't need to add a specific extension. But when the file is saved they have to open the terminal, get to the folder where the file is being stored and do as follows (assuming that the file is name "script"):

 ```
	chmod 700 script
 ```
This will make the script an executable file and now we can start it by typing the next command in the terminal:

 ```
	./script
 ```
Ahhh I alomst forgot. Linux users please write this line as first in your script. ALWAYS!!!!!

 ```
	#!/bin/bash
 ```

##That's it! Now get to work!
