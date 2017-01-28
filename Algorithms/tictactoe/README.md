# Tic Tac Toe (3 points)

## Instructions

You are given an NxN Tic Tac Toe game. If the winner exists, determine who won.

Complete the function `checkWinner`. It should return one of the following results:

	* 1 if 'x' won
	* 2 if 'o' won
	* 3 if a tie occurs
	* 0 otherwise

The inputs to the function will be a pointer to an array representing the board and an int n, the size of the board. The array will have values `x`, `o`, or `-`. `-` represents an empty space.

`checkWinner` should follow this function prototype:

```
int checkWinner(char* board, int n)
```

Use one of the following languages (C/C++, Python, Java). Template code is provided in C. Please include a file that compiles your code.

## Example
Consider the following board:

```
x o x x
o o x o
o x o o
x x o x
```

`checkWinner` will return 1.