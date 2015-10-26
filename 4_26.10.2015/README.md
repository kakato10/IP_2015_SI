Time to choose (if, if/else, switch)
=====================
Great, you've learned some of the basics of the C++ language, now it's time to see how do we navigate our programs to go in different directions, depending on some kind of conditions. So here are your tasks for this exercise.
This time, read the tasks careful

##Task 1: Viva Las Vegas!
Write a C++ program that asks the user to enter a number between 2 and 12 including (validate the input as much as possible). After that the program should throw two dices(get two random numbers between 1 and 6). If the sum of the numbers from the dices is the same as the number that the user has entered, he wins the Jackpot - 2000$, otherwise if the number of the user is divisible to the sum on the dices without remainder, he wins only 200$ and if none of the above is true, well Viva Las Vegas!

###Example usage
Input:
```
Enter a number between 2 and 12: 6
```

Output:
```
Dice 1: 5
Dice 2: 7
Sum: 12
Better luck next time!
```
___


Input:
```
Enter a number between 2 and 12: 12
```

Output:
```
Dice 1: 6
Dice 2: 6
Sum: 12
CONGRATULATIONS!!!!! You've just won our JACKPOT! Here are your 2000$.
```
___


Input:
```
Enter a number between 2 and 12: 8
```

Output:
```
Dice 1: 1
Dice 2: 3
Sum: 4
Good job, you've just won 200$!!!
```
___


Input:
```
Enter a number between 2 and 12: 33
```

Output:
```
Cheater!!!
```

####NB
Use these massages to interract with the user.

##Task 2: Simple Calculator

Write a C++, which asks the user to enter three values for a, operator and b, where a and b are numbers and operator is char. Operator should be one of the following: '+', '-', '/', '*'
So basically you should display the value of  "a operator b" using switch. If the operator is not one of these four it should display the message "Unknown operator!". The examples are going to make it a bit more understandable.

###Example usage
Input:
```
a = 4, operator = '+',  b = 3.2
```

Output:
```
7.2
```	

___

Input:
```
a = 4, operator = '/', b = 2 
```
Output:
```
2
```

___

Input:
```
a = 3, operator = '*', b = 2
```

Output:
```
6
```

___

Input: 
```
a = 3, operator = '%', b = 2
```

Output:
```
Unknown operator!!
```


### Now that you've read everything, get to work. 
## Let the force be with you!
