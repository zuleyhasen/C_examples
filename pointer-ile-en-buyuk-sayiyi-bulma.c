// return a pointer to the max element of an array
#include <stdio.h>
#define SIZE 10
int *max_of_array( int *p, int *q ){
    int *max = p;
    p++;
    while( p <= q ){
        if( *p > *max ) max = p;
        p++;
    }
    
    return max;
    
    //    5      10    4    20
    //                             p
    //                     max
}
int main(){
    int A[ SIZE ] = { 1, 2, 3, 8, 6, 10, 2, 3, 2, 1 };
    int *q = max_of_array( A, A + SIZE - 1 );
    
    printf( "Max of A is: %d with index %d.\n", *q, q - A );
    
    return 0;
}
