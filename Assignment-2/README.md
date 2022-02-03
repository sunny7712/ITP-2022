# Assignment-2

*Team Members*
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IEC2021050  |   Aman Raj | Geek-Aman |
|    IEC2021051  |   Nimish Rajurkar | NimishR03 | 
|    IEC2021052  |   Vamsi K | sunny7712  |
|    IEC2021053  |   Sai Praneeth | praneeth855 |

*Group No-*"13"

*Faculty Name-*"Md. Javed"

*Mentor Name-* "Md. Meraz"

---
## Problem Statement

A record contains name of cricketer, his age, number of test matches that he has played and
the average runs that he has scored in each test match. Create an array of structure to hold
records of 20 such cricketer and then write a program to read these records and arrange them
in ascending order by average runs. Use the qsort() standard library function.

---
## How to use code

#Download project
git clone https://github.com/sunny7712/ITP-2022

Project Initialize 
```
cd ITP-2022

#create Assignment-2 folder
mkdir Assignment_02

#go to assignment-2
cd assignment_02

#Create file
touch readme.md
touch source-code.c
```
---
```
Run the code

gcc source-code.c
a.exe

Output

Ascending order of the cricketers based on their average.
```
---

### *Test case*


```

Input:

Enter the data of the cricketer: 
Average: 35.6

Name: Raju

Age: 23

Number of Test Matches played: 54

Enter the data of the cricketer: 
Average: 54.5

Name: Birju

Age: 32

Number of Test Matches played: 65

Enter the data of the cricketer:
Average: 45.8

Name: Vamsi 

Age: 26

Number of Test Matches played: 45

Output:

Cricketers arranged in ascending order by their Average:

Raju     35.599998
Vamsi    45.799999
Birju    54.500000


```


---

### Theory
---
I. STRUCTURES IN C
---
A structure is a user defined data type in C/C++. A structure
creates a data type that can be used to group items of
possibly different types into a single type.
A structure variable can either be declared with structure
declaration or as a separate declaration like basic types and
Structure members are accessed using dot (.) operator 

---
II. FOR LOOP
---
A for loop is a repetition control structure which allows
us to write a loop that is executed a specific number of
times. The loop enables us to perform n number of steps
together in one line. The basic form of declaring a for loop
is by the syntax:
```
for (initialization; condition; increment;)

{

// body of the loop

// statements we want to execute

}
```
---
III.QSORT() FUNCTION
---
Standard C library provides qsort() that can be used for
sorting an array. As the name suggests, the function uses
QuickSort algorithm to sort the given array.
```
void qsort (void* base, size_t num, size_t size,
			int (*comparator)(const void*,const void*));  
``` 
The key point about qsort() is comparator function comparator. The comparator function takes two
arguments and contains logic to decide their relative order
in sorted output. The idea is to provide flexibility so that
qsort() can be used for any type (including user defined
types) and can be used to obtain any desired order
(increasing, decreasing or any other).

The comparator function takes two pointers as arguments
(both type-casted to const void*) and defines the order of
the elements by returning (in a stable and transitive
manner).
      

---

### References

1. https://www.geeksforgeeks.org/structures-c/
2. https://www.geeksforgeeks.org/comparator-function-of-
qsort-in-c/
