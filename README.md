# Assignment-1

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
Write a C program to find sum of main diagonal elements and sum of minor diagonal elements of a matrix.	

---
## How to use code

#Download project
git clone https://github.com/sunny7712/ITP-2022

Project Initialize 
```
cd ITP-2022

#create Assignment-1 folder
mkdir Assignment_01

#go to assignment-1
cd assignment_01

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

The sum of major and minor diagonal of the matrix.
```
---

### *Test case*

Find max

Test Case-1

Input:

3

1 4 6

2 4 6

7 3 9

Output:

Enter the size of the Matrix: 3

Enter the elements of the Matrix:

1 4 6

2 4 6

7 3 9

The sum of the major diagonal elements is 14

The sum of the minor diagonal elements is 17

#--------------------------#

Test Case-2

Input:

2

2 4

6 8

Output:

Enter the size of the Matrix: 2

Enter the elements of the Matrix:

2 4

6 8

The sum of the major diagonal elements is 10

The sum of the minor diagonal elements is 10


---

### Theory
---
I. 2-DIMENSIONAL ARRAYS
---
An array is a collection of items stored at contiguous memory
locations. The idea is to store multiple items of the same type
together. One of the three types of arrays is a
multidimensional array. Two – dimensional array is the
simplest form of a multidimensional array. We can see a
two – dimensional array as an array of one – dimensional
array for easier understanding. The basic form of declaring
a two-dimensional array of size x, y is by the syntax:

data_type array_name[x][y];

data_type: Type of data to be stored. Valid C data type.

Elements in two-dimensional arrays are commonly
referred to by x[i][j] where i is the row number and ‘j’ is
the column number. A two – dimensional array can be
seen as a table with ‘x’ rows and ‘y’ columns where the
row number ranges from 0 to (x-1) and column number
ranges from 0 to (y-1).

---
II. FOR LOOP
---
A for loop is a repetition control structure which allows
us to write a loop that is executed a specific number of
times. The loop enables us to perform n number of steps
together in one line. The basic form of declaring a for loop
is by the syntax:

for (initialization; condition; increment;)

{

// body of the loop

// statements we want to execute

}

Nested loop means a loop statement inside another loop
statement. That is why nested loops are also called as loop
inside loop. The basic form of declaring a nested for loop
is by the syntax:

for (initialization; condition; increment) {

for (initialization; condition; increment) {

// statement of inside loop

}

// statement of outer loop

}


---

### References

[1] https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/

[2] https://www.geeksforgeeks.org/loops-in-c-and-cpp/?ref=gcse

[3] https://www.geeksforgeeks.org/nested-loops-in-c-with-examples/

[4] https://www.geeksforgeeks.org/array-data-structure/
