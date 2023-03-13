
// count n in an array
#include <stdio.h>
#define SIZE 10
int count_in_array( int *p, int size, int n ){
    int count = 0, i;
    for( i = 0; i < size; i++ ){
        if( *p == n ) count++;
        p++;
    }
    return count;
}
int main(){
    int A[ SIZE ] = { 1, 2, 3, 8, 6, 1, 2, 3, 2, 1 }, n = 2, count;
    
    count = count_in_array( A, SIZE, n );
    printf( "%d appears %d time(s) in A.\n", n, count );
    
    return 0;
}
