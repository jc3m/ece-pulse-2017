#include <stdio.h>

int checkWinner(char* board, int n)
{
    return -1;
}

void testWinner()
{
    char board[3][3] = {
        {'x', 'o', 'x'},
        {'o', 'o', 'x'},
        {'x', 'o', '-'}};

    int result = checkWinner((char *)(board), 3);
    printf("Result: %d\n", result);
}

int main(int argc, char* argv[])
{
    testWinner();
    return 0;
}
