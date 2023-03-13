// Find n % m recursively
// 3 % 4: 3
// 10 % 4 = 6 % 4 = 2 % 4: 2
#include <stdio.h>
int mod( int n, int m ){
    if( n < m ) return n;
    return mod( n - m, m );
}
int main(){
    int n, m, result;
    printf( "Enter n and m: " ); scanf( "%d %d", &n, &m );
    result = mod( n, m );
    printf( "\n%d mod %d = %d.\n\n", n, m, result );
    return 0;
}