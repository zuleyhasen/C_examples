// find a^b recursively

#include <stdio.h>
// assume b >= 0
int power( int a, int b ){
    if( !b ) return 1;
    return a * power( a, b-1 );
}
int main(){
    int a = 5, b = -2;
    printf( "%d^%d = %d.\n", a, b, power( a, b ) );
    return 0;
}


