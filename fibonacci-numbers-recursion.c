// Fibonacci Numbers
// f(0) = f(1) = 1 and f(n) = f(n-2) + f(n-1) for n >= 2
// 1 1 2 3 5 8 13 21 34 ...
// 0 1 2 3 4 5 6  7  8
#include <stdio.h>
int fibonacci( int n ){
    if( n < 2 ) return 1;
    printf( "n: %d, not base case, recalling with %d and %d.\n", n, n-2, n-1 );
    return fibonacci( n - 2 ) + fibonacci( n - 1 );
}
int main(){
    int n, result;
    printf( "Enter n: " ); scanf( "%d", &n );
    result = fibonacci( n );
    printf( "\nf(%d) = %d.\n\n", n, result );
    return 0;
}
