// find the average of the elements of an integer array

#include <stdio.h>
void print_array( const int A[], int size ){
    int i;
    printf("\n\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n\n");
}
double average( int A[], int size ){
    if( !size ) return 0.0;
    return ( ( size - 1 ) * average( A + 1, size - 1 ) + A[ 0 ] ) / size;
}
int main(){
    int A[] = { 1, 2, 3, 4 };
    printf( "average: %.2f.\n", average( A, sizeof( A ) / sizeof( int ) ) );
    return 0;
}

