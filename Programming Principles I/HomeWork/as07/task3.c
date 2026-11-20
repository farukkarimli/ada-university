#include <stdio.h>

#define N 3

int checkWin(char b[N][N], char p);

int main() 
{
    printf("Let The Game Begin!\n");

    char board[N][N];
    char player = 'O';
    int row, col;
    int moves = 0;

    // start with every cell empty (a space)
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = ' ';

    while (moves < N * N)
    {
        printf("'%c', choose your location (row, column): ", player);

        // scanf returns how many numbers it read; we need 2
        if (scanf("%d %d", &row, &col) != 2)
        {
            printf("Please enter two numbers.\n");
            while (getchar() != '\n');   // throw away the bad input
            continue;
        }

        if (row < 0 || row >= N || col < 0 || col >= N)
        {
            printf("Indexes must be between 0 and %d.\n", N - 1);
            continue;
        }

        if (board[row][col] != ' ')
        {
            printf("That spot is already taken.\n");
            continue;
        }

        board[row][col] = player;
        moves++;

        // print the board
        printf("\n");
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                printf("%c ", board[i][j]);
            printf("\n");
        }
        printf("\n");

        if (checkWin(board, player))
        {
            printf("'%c' wins!\n", player);
            return 0;
        }

        // switch players
        if (player == 'O')
            player = 'X';
        else
            player = 'O';
    }

    printf("The game is a tie.\n");

    return 0;
}


// Here you may add your own functions if you want

// Returns 1 if player p has a full row, column, or diagonal, otherwise 0
int checkWin(char b[N][N], char p)
{
    int diag1 = 1, diag2 = 1;

    for (int i = 0; i < N; i++)
    {
        int rowWin = 1, colWin = 1;

        for (int j = 0; j < N; j++)
        {
            if (b[i][j] != p) rowWin = 0;   // row i is not all p
            if (b[j][i] != p) colWin = 0;   // column i is not all p
        }
        if (rowWin || colWin)
            return 1;

        if (b[i][i] != p) diag1 = 0;         // main diagonal
        if (b[i][N - 1 - i] != p) diag2 = 0; // other diagonal
    }

    return diag1 || diag2;
}