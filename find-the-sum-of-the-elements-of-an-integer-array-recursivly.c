// find the sum of the elements of an integer array

#include <stdio.h>
void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}
int sum( int A[], int size ){
    if( size == 0 ) return 0;
    print_array( A, size );
    //return A[ size - 1 ] + sum( A, size - 1 );
    return A[ 0 ] + sum( A + 1, size - 1 );
    //return A[ 0 ] + sum( &A[ 1 ], size - 1 );
    
    // n! is n times (n-1)!
    // sum of the elements is first element plus sum of the rest 
}
int main(){
    int A[] = { 1, 2, 3, 4 };
    printf( "sum: %d.\n", sum( A, sizeof( A ) / sizeof( int ) ) );
    return 0;
}
