Enum and arrays
=====================
##Task 1: "I am in relationhip!!!"

Write a C++ program which has an enum type Weekday. The constants of the Weekday type should be MONDAY, TUESDAY, ..., SUNDAY with values from 1 to 7. After that ask the user to enter 4 integer (from 10 to 99) numbers, that should be stored in an array. The program should find and display every two numbers from the array, that are in relation. If a and b are the numbers, then aRb <=> the sum of the digits (DIGITS!!!) of the two numbers is a day of the week.

###Example usage

Input:
```
numbers 1: 10
numbers 2: 23
numbers 3: 25
numbers 4: 13  
```

Output:
```
10 is in relation with 23
10 is in relation with 13
```

Input:
```
numbers 1: 43
numbers 2: 23
numbers 3: 25
numbers 4: 13  
```

Output:
```
No relations found.
```

Input:
```
numbers 1: 40
numbers 2: 49
numbers 3: 10
numbers 4: 21  
```

Output:
```
40 is in relation with 10
40 is in relation with 21
10 is in relation with 21
```