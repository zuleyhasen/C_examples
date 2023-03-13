// copy the words inside a sting to different strings (in an array of strings)
#include <stdio.h>
int main(){
    char str1[ 50 ] = "  aa   bb   abc   x";
    char words[ 20 ][ 50 ];
    int i = 0, j;
    char *p = str1, *q = words[ 0 ];
    
    while( p != '\0' ){
        while( *p == ' ' ) p++;
        if( *p == 0 ) break;
        while( *p != 0 && *p != ' ' ){
            *q = *p;
            p++; q++;
        }
        *q = 0; // to make sure the next char of each word is null
        i++;
        q = words[ i ];
    }
    // break brings you here
    
    for( j = 0; j < i; j++ ) printf( "%s\n", words[ j ] );
    
    return 0;
}

