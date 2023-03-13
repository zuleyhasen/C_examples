#include <stdio.h>
//print the digits of an integer
void print_digits_reverse( int n ){
    if( n ){
        printf( "%d ", n % 10 );
        print_digits_reverse( n / 10 );
    }
}
void print_digits( int n ){
    if( n ){
        print_digits( n / 10 );
        printf( "%d ", n % 10 );
    }
}
int main(){
    int n = 3456;
    
    print_digits_reverse( n );
    printf( "\n" );
    print_digits( n );
    return 0;
}