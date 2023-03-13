#include <stdio.h>
#include <stdlib.h>

void print_matrix(int r, int matrix[][5]) 
{
    int i,j;
    for (i = 0; i < r; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%d ", matrix[i][j]);
        }
    printf("\n");
   }
}

void print_array(int size, int arr[]) 
{
    int i;
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*In this function, you will find the path and sum of the numbers in the path at the
same time. You will fill the destination array with the numbers in the path, and
return the sum of the numbers in the path.*/

int find_path(int matrix[][5], int arr[], int r)
{
    int i = 0, j = 0, k = 0, sum=0;
    ;
    
    while (i < r && j < 5) {
        sum += matrix[i][j];
        arr[k++] = matrix[i][j];
        int right = 0, down = 0;
        if (i + 1 < r) {
            down = matrix[i + 1][j];
        }
        if (j + 1 < 5) {
            right = matrix[i][j + 1];
        }
        if (down > right) {
            ++i;
        } else {
            ++j;
        }
    }
    return sum;
}

int main()
{
    int r = 5;   //Last digit of my ID is 0
    int matrix[r][5];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < 5; ++j) {
            matrix[i][j] = (rand() % 99) + 1;
        }
    }
 
    int arr[r + 5 - 1];
    print_matrix(r, matrix);
    int sum = find_path(matrix, arr, r);
    printf("\n");
    print_array(r + 5 - 1, arr);
    printf("Sum of the numbers in the path is %d\n", sum);
    return 0;
}


