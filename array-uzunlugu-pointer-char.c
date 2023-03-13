// write a function which returns the length of a string (strlen in string.h)
#include <stdio.h>
int string_length( char str[] ){
    int i;
    for( i = 0; str[ i ] != '\0'; i++ );
    // for( i = 0; str[ i ] != 0; i++ ); ... for( i = 0; str[ i ]; i++ );    
    /*
    i = 0;
    while( str[ i ] != '\0' ){
        i++;
    }
    */
    return i;
}
int main(){
    //char str[ 100 ] = { 'A', 'b' };
    char str[ 100 ] = "Abc0";
    //char str[ 100 ] = { 'A', 'b', 'c', '0' };
    //char str[ 100 ] = { 80, 50, 51, 40 };
    
    printf("The length of \"%s\" is: %d.\n", str, string_length( str ) );
}

