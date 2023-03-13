
#include <stdio.h>
//print an integer array recursively
void print_array_rec( int A[], int size ){
    if( size ){
        printf( "%d ", A[ 0 ] );
        print_array_rec( A + 1, size - 1 );
    }
}
//print an integer array recursively in reverse order
void print_array_reverse_rec( int A[], int size ){
    if( size ){
        printf( "%d ", A[ size - 1 ] );
        print_array_reverse_rec( A, size - 1 );
    }
}
int main(){
    int A[ 10 ] = { 1, 2, 3, 4 };
    
    print_array_rec( A, 10 );
    printf( "\n" );
    print_array_reverse_rec( A, 10 );
    return 0;
}
