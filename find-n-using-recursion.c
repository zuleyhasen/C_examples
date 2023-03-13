// Find n! using recursion
// n! = n * (n-1) * (n-2) ... 2 * 1
// How can i find n! if (n-1)! is equal to x
// n! = n * x
// 0! = 1
#include <stdio.h>
int factorial( int n ){
    if( n == 0 ) return 1;
    printf( "n: %d, not base case, recalling with %d.\n", n, n-1 );
    return n * factorial( n - 1 );
}
int main(){
    int n, result;
    printf( "Enter n: " ); scanf( "%d", &n );
    result = factorial( n );
    printf( "\n%d! = %d.\n\n", n, result );
    return 0;
}