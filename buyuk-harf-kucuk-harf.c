/* Write a function which receives an uppercase letter and converts it to lowercase.
 * Write a function which receives an lowercase letter and converts it to uppercase.*/
#include<stdio.h>
char to_lower( char );
char to_lower_with_check( char ch );
char to_upper( char );
int main( ){
    char ch1, ch2;
    printf( "Enter an uppercase letter: " );
    scanf( "%c", &ch1 );
    // call the function
    ch2 = to_lower_with_check( ch1 );
    printf( "Your lowercase letter is: %c.\n\n", ch2 );
    scanf( "%c", &ch1 );
    
    printf( "Enter an lowercase letter: " );
    scanf( "%c", &ch1 );
    // call the function
    ch2 = to_upper( ch1 );
    printf( "Your uppercase letter is: %c.\n\n", ch2 );
    
    return 0;
}
char to_lower( char ch ){
    // this function assumes that ch is an uppercase letter
    char result;
    // find the order of ch among capital letters
    // then add this to 'a' to find the corresponding lowercase letter
    result = 'a' + ( ch - 'A' ); // ch + ('a'-'A'); ch + 32;
    return result;
}
char to_lower_with_check( char ch ){
    // this function does not assume that ch is an uppercase letter
    char result;
    
    if( ch >= 'A'  && ch <= 'Z' ){    
        // find the order of ch among capital letters
        // then add this to 'a' to find the corresponding lowercase letter
        result = 'a' + ( ch - 'A' ); // ch + ('a'-'A'); ch + 32;
        return result;    
    }
    return ch;
}
/* A    B  C  D   E
 * 50 51 52 53 54
 * 
 * 'D' - 'A' : 3
 * 
 * a   b   c   d   e
 * 90 91 92 93 94
 * 
 * 'd' - 'a': 3
 * 'a' + 3 = 90 + 3 = 93
 * 
 */
char to_upper( char ch ){
    // this function assumes that ch is an lowercase letter
    char result;
    // find the order of ch among small letters
    // then add this to 'A' to find the corresponding uppercase letter
    result = 'A' + ( ch - 'a' ); // ch - ('a'-'A'); ch - 32;
    return result;
}