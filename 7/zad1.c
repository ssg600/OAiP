#include <stdio.h>

#define ROWS 3
#define COLS 3

void increase_matrix(int matrix[ROWS][COLS], int value)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[i][j] += value;
        }
    }
}

int negative_row(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        int flag = 1;
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] >= 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int matrix[ROWS][COLS] = {{9, 8, 7}, {-6, -5, -4}, {3, 2, 1}};

    int row = negative_row(matrix);
    if (row == -1)
    {
        printf("No negative row found.\n");
        return 0;
    }
    
	printf("Matrix after increasing by %d:\n", matrix[row][0]);
	
    increase_matrix(matrix, matrix[row][0]);

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
