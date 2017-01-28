#include <stdbool.h>
/*
1 - x wins
2 - o wins
3 - tie/cats game
0 - otherwise
Values 'x', 'o', or '-'
n in a row, column, or diagonal
*/

#include <stdio.h>
int checkWinner(char* board, int n)
{
	bool x = false;
	bool o = false;
	bool empty = false;
	int c = 0;

	// for x
	// j = col
	// i = row
	// check horizontals
	for(int i = 0; i < n; i++){
		int countx = 0;
		int counto = 0;
		for(int j = 0; j < n; j++){
			if(board[i*n+j] == 'x')
				countx++;
			if(board[i*n+j] == 'o')
				counto++;
			if(board[i*n+j] == '-')
				empty = true;
		}
		if(countx == n)
			x = true;
		if(counto == n)
			o = true;
	}


	// check verticals
	for(int i = 0; i < n; i++){
		int countx = 0;
		int counto = 0;
		for(int j = 0; j < n; j++){
			if(board[j*n+i] == 'x')
				countx++;
			if(board[j*n+i] == 'o')
				counto++;
		}
		if(countx == n)
			x = true;
		if(counto == n)
			o = true;
	}


	int cxa = 0;
	int coa = 0;
	int cxb = 0;
	int cob = 0;
	for(int i = 0; i < n; i++){
		if(board[i*n+i]== 'x')
			cxa++;
		if(board[i*i+i] == 'o')
			coa++;
			// col = n - i, row = n -i
		if(board[(n-i-1) + i*n] == 'x')
			cxb++;
		if(board[(n-i-1) + i*n] == 'o')
		{
			//if(n == 6)
			//	printf("%c,", board[(n-i-1) + i*n]);
			cob++;
		}
	}
	//printf("%d\n;", cob);
	if(cxa == n)
		x = true;
	if(coa == n)
		o = true;
	if(cxb == n)
		x = true;
	if(cob == n)
		o = true;

	//if(n == 6)
	//	printf("%d, %d", x, o);
	if(x && !o)
		return 1;
	else if(!x && o)
		return 2;
	else if(x && o)
		return 0;
	else if(!empty)
		return 3;
	else
		return 0;
}


void testWinner()
{
    char board1[3][3] = {
        {'o', 'x', 'o'},
        {'o', 'x', 'x'},
        {'x', 'o', 'x'}};
	char board2[5][5] = {
	    {'x', 'o', 'x', 'o', 'x'},
	    {'o', 'x', 'o', 'o', 'o'},
	    {'x', 'o', 'x', 'x', 'x'},
		{'o', 'x', 'o', 'x', 'o'},
		{'x', 'o', 'x', 'o', 'x'}};
	char board3[6][6] = {
        {'x', 'o', 'x', 'o', 'x', 'o'},
        {'o', 'x', 'o', 'x', 'o', 'x'},
        {'x', 'o', 'x', 'o', 'x', 'x'},
		{'o', 'x', 'o', 'x', 'o', 'x'},
		{'x', 'o', 'x', 'o', 'o', 'x'},
		{'o', 'o', 'x', 'o', 'o', 'x'}};

    int result1 = checkWinner((char *)(board1), 3);
	int result2 = checkWinner((char *)(board2), 5);
	int result3 = checkWinner((char *)(board3), 6);
    printf("Result: %d,\n %d,\n %d,\n", result1, result2, result3);
}
int main(int argc, char* argv[])
{
    testWinner();
    return 0;
}
