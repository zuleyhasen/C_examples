// string compare function - strcmp in string.n 
// return 0 is strings are same; a negative value if the first string 
// comes before the other in the dictionary; positive value otherwise
#include <stdio.h>
int string_compare( char *str1, char *str2 ){
    // "abc" - "abc"  return 0
    // "abc" - "abe"  return 'c' - 'e' ... return -2
    // "abc" - "abcd" return 0 - 'd'  ... return -4
    while( *str1 != 0 && *str2 != 0 ){
        if( *str1 != *str2 ) return *str1 - *str2;
        str1++; str2++;
    }
    if( *str1 || *str2 ) return *str1 - *str2;
    return 0;
}
int main(){
    char str1[ 20 ] = "abca";
    char str2[ 20 ] = "abc";
    int result = string_compare( str1, str2 );
    
    if( result == 0 ) printf( "The strings are same.\n" );
    else if( result < 0 ) printf( "str1 comes first.\n" );
    else printf( "str2 comes first.\n" );
    return 0;
}

