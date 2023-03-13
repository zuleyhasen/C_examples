// copy the elements of an array into another one
// first even elements, then odd elemets
#include <stdio.h>
#define SIZE 10
void print_array( const int A[], int size ){
    int i;
    printf("\n");
    for( i = 0; i < size; i++ ) printf( "%d ", A[ i ] );
    printf("\n");
}
void even_odd_copy( int *dest, int *source, int size ){
    int *last = dest + SIZE - 1, *last_of_souce = source + SIZE - 1;
    while( source <= last_of_souce ){
        if( *source % 2 ){
            *last = *source;
            last--;
        }
        else{
            *dest = *source;
            dest++;
        }
        source++;
    }
}
int main(){
    int A[ SIZE ] = { 1, 2, 3, 8, 6, 1, 2, 3, 2, 1 };
    int B[ SIZE ];
    
    print_array( A, SIZE );
    print_array( B, SIZE );
    
    even_odd_copy( B, A, SIZE );
    
    print_array( A, SIZE );
    print_array( B, SIZE );
    
    even_odd_copy( B + SIZE/2, A, SIZE/2 );
    // this call results in copying the first half of A inside second half 
    // of B - evens first then odd elements
    
    return 0;
}

