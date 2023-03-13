#include <stdio.h>
#define SIZE 10 // assume SIZE is even
int is_symmetric( int *first, int *last ){
    // we assume that first <= last
    // 5 6 5
    while( first < last ){
        if( *first != *last ) return 0;
        first++;
        last--;
    }
    return 1;
}
int main(){
    int A[ SIZE ] = { 1, 2, 3, 1, 1, 1, 2, 3, 2, 1 };
    
    if( is_symmetric( A, A + SIZE - 1 ) )
        printf( "Symmetric\n" );
    else printf( "Not symmetric\n" );
    
    //check whether the first half is symmetric
    printf( "The first half is " );
    if( is_symmetric( A, A + SIZE/2 - 1 ) )
        printf( "Symmetric\n" );
    else printf( "Not symmetric\n" );
    
    //check whether the second half is symmetric
    printf( "The second half is " );
    if( is_symmetric( A + SIZE/2, A + SIZE - 1 ) )
        printf( "Symmetric\n" );
    else printf( "Not symmetric\n" );
    
    //check whether the second quarter is symmetric
    printf( "The second quarter is " );
    if( is_symmetric( A + SIZE/4 + 1, A + SIZE/2 - 1 ) )
        printf( "Symmetric\n" );
    else printf( "Not symmetric\n" );
    
    return 0;
}
