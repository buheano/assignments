#include <stdio.h>
#include <stdbool.h>

void add_matrices(int rows, int cols);
void find_saddle_point(int n);
void inverse_2x2(void);
void check_magic_square(int n);

int main(void)
{
    int choice;

    printf("Matrix Operations Menu\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Inverse of a 2x2 matrix\n");
    printf("4. Check Magic Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
        {
            int rows, cols;
            printf("Enter number of rows and columns: ");
            scanf("%d %d", &rows, &cols);

            if (rows <= 0 || cols <= 0)
            {
                printf("Invalid matrix size.\n");
                return 1;
            }

            add_matrices(rows, cols);
            break;
        }

        case 2:
        {
            int n;
            printf("Enter order of square matrix: ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf("Invalid size.\n");
                return 1;
            }

            find_saddle_point(n);
            break;
        }

        case 3:
            inverse_2x2();
            break;

        case 4:
        {
            int n;
            printf("Enter order of square matrix: ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf("Invalid size.\n");
                return 1;
            }

            check_magic_square(n);
            break;
        }

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

void add_matrices(int rows, int cols)
{
    int matrix1[rows][cols];
    int matrix2[rows][cols];

    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Result of Addition:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
}

void find_saddle_point(int n)
{
    int matrix[n][n];
    bool found = false;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int min = matrix[i][0];
        int col_index = 0;

        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                col_index = j;
            }
        }

        bool is_saddle = true;

        for (int k = 0; k < n; k++)
        {
            if (matrix[k][col_index] > min)
            {
                is_saddle = false;
                break;
            }
        }

        if (is_saddle)
        {
            printf("Saddle Point: %d\n", min);
            found = true;
        }
    }

    if (!found)
    {
        printf("No Saddle Point found.\n");
    }
}

void inverse_2x2(void)
{
    float matrix[2][2];

    printf("Enter elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    float determinant = (matrix[0][0] * matrix[1][1]) -
                        (matrix[0][1] * matrix[1][0]);

    if (determinant == 0)
    {
        printf("Inverse does not exist (determinant is zero).\n");
        return;
    }

    printf("Inverse Matrix:\n");
    printf("%.2f %.2f\n",
           matrix[1][1] / determinant,
           -matrix[0][1] / determinant);

    printf("%.2f %.2f\n",
           -matrix[1][0] / determinant,
           matrix[0][0] / determinant);
}

void check_magic_square(int n)
{
    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int reference_sum = 0;

    for (int j = 0; j < n; j++)
    {
        reference_sum += matrix[0][j];
    }

    bool is_magic = true;

    for (int i = 0; i < n; i++)
    {
        int row_sum = 0;
        int col_sum = 0;

        for (int j = 0; j < n; j++)
        {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }

        if (row_sum != reference_sum || col_sum != reference_sum)
        {
            is_magic = false;
            break;
        }
    }

    int diagonal1 = 0;
    int diagonal2 = 0;

    for (int i = 0; i < n; i++)
    {
        diagonal1 += matrix[i][i];
        diagonal2 += matrix[i][n - i - 1];
    }

    if (diagonal1 != reference_sum || diagonal2 != reference_sum)
    {
        is_magic = false;
    }

    if (is_magic)
    {
        printf("It is a Magic Square.\n");
    }
    else
    {
        printf("It is NOT a Magic Square.\n");
    }
}