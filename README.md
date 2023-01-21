# Backtracking-and-Branch-and-Bound-
Using the Backtracking and Branch and Bound programming techniques write a program that solves a maze in C++.

Input Format

The program receives from the standard input two integers  and , followed by  lines of  integer values  separated by a space, representing the maze. A  represents a square in which it is possible to move, a  is a square through which it is NOT possible to pass.

The origin or start square is always the square  and the exit or goal is always the square .

Constraints

, followed by a matrix with size  filled with .

Output Format

The output of the program is a matrix of Integer values  representing the path out of the maze. You must first display the solution using the backtracking technique, and then using the branch and bound technique.

Sample Input 0

4
4
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1
Sample Output 0

1 0 0 0
1 1 0 0
0 1 0 0
0 1 1 1

1 0 0 0
1 1 0 0
0 1 0 0
0 1 1 1
Sample Input 1

4
4
1 1 0 0
0 1 1 0
0 0 1 0
0 1 1 1
Sample Output 1

1 0 0 0
1 1 0 0
0 1 0 0
0 1 1 1

1 0 0 0
1 1 0 0
0 1 0 0
0 1 1 1
