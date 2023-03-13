#include <stdio.h>
#define SIZE 10
void print_array( const int A[], int size ){
    int i;
    printf("\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n");
}
int main(){
    int A[ SIZE ];
    int *P[ SIZE ];
    int i, j = 0;
    int **q;
    
    for( i = SIZE-1; i >= 0; i-- ){
        P[ j ] = A + i; // = &A[ i ]
        j++;
    }
    
    q = P; // q = &P[0]
    
    // P[0]: A + SIZE - 1
    // P[1]: A + SIZE - 2
    //...
    // P[SIZE-1]: A
    
    for( i = 0; i < SIZE; i++ ){
        *P[ i ] = SIZE - 1 - i;
    }
    // *P[0] = 0 eqv A[ SIZE-1 ] = 0
    
    print_array( A, SIZE );
    
    // prints the array in normal order
    for( i = SIZE-1; i >= 0; i-- ){
        printf( "%d ", *P[ i ] );
    }
    printf( "\n" );
    
    // prints the array in reverse order
    for( i = 0; i < SIZE; i++ ){
        printf( "%d ", *P[ i ] );
    }
    printf( "\n" );
    
    // prints the array in reverse order
    for( i = 0; i < SIZE; i++ ){
        printf( "%d ", **q );
        q++;
    }
    printf( "\n" );
    
    // increment each element of A, starting with its first element
    q--; // q points to P[ 9 ]
    for( i = 0; i < SIZE; i++ ){
        **q = **q + 1;
        q--;
    }
    print_array( A, SIZE );
}
