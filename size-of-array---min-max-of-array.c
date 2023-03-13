//size of array
#include<stdio.h>
int main( void ) {
    int prime_lt_100[] = {2.0, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}, n;
    
    n = sizeof( prime_lt_100 ) / sizeof( double );
    
    printf( "The size of the array is: %d.\n", n );
    
    printf( "\n\n" );
    return 0;    
}

-------------------------------------------------------------------------

#include <stdio.h>
#define SIZE 5
void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}

void min_max( const int A[], int size, int Results[] ){
    int i;
    
    Results[ 0 ] = A[ 0 ] < A[ 1 ] ? A[ 0 ] : A[ 1 ];
    Results[ 1 ] = A[ 0 ] < A[ 1 ] ? A[ 1 ] : A[ 0 ];
    
    for( i = 2; i < size; i++ ){
        if( A[ i ] > Results[ 1 ] ) Results[ 1 ] = A[ i ];
        else if( A[ i ] < Results[ 0 ] ) Results[ 0 ] = A[ i ];
    }
}
int main()
{
    int A[ SIZE ] = { 10, 20, -30 }, B[ 2 ];
    
    print_array( A, SIZE );
    
    // call the function
    min_max( A, SIZE, B );
    printf( "Min is: %d, max is: %d.\n\n", B[ 0 ], B[ 1 ] );
    
    printf("\n\n");
    return 0;
}

