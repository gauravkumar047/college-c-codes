#include <stdio.h>

int main()
{
    int m, n;

    // Input dimensions of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    if (m != n)
    {
        printf("The matrix is not square, so diagonal sum is not defined.\n");
        return 0;
    }

    int mat[m][n];
    int sum = 0;

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            
            if (i == j)
            {
                sum += mat[i][j];
            }
        }
    }

    // Displaying the matrix
    printf("The matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    // Displaying the sum of diagonal elements
    printf("The sum of diagonal elements is: %d\n", sum);

    return 0;
}
