// count n in A

#include <stdio.h>
void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}
int count( int A[], int size, int n ){
    int result = 0;
    if( !size ) return 0;
    result = count( A + 1, size - 1, n );
    if( A[ 0 ] == n ) return 1 + result;
    return result;
}
int main(){
    int A[] = { 3, 3, 3, 4 }, n = 3;
    printf( "count: %d.\n", count( A, sizeof( A ) / sizeof( int ), n ) );
    return 0;
}