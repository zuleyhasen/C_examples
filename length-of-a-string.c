#include <stdio.h>
// length of a string
int strlen_rec( char *p ){
    if( !*p ) return 0;
    printf( "%s\n", p );
    return 1 + strlen_rec( p + 1 );
}

int main(){
    char A[ 100 ] = "", B[ 100 ] = "abc.";
    int len = strlen_rec( A );
    
    printf( "length of \"%s\" = %d.\n", A, len );
    return 0;
}
