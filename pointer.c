// print digits of a decimal number
#include <stdio.h>
int main(){
    int x, y = 20;
    int *p, *q;
    int **r; // r can hold the address of an integer pointer
    
    p = &x;
    q = &y;
    
    //r = &x; incompatible
    
    r = &p;
    
    printf( "Enter x: " );
    //scanf( "%d", &x );
    scanf( "%d", p );
    
    printf( "\nx: %d\n", x );
    
    // x = x + 1;
    // *p: indirection operator
    // x = *p + 1;
    *p = *p + 1;
    printf( "\nx: %d\n", *p );
    
    *p = *q;
    printf( "\nx: %d\n", x );
    
    **r = 3; // equiv to *p = 3   equiv to x = 3
    printf( "\nx:%d y: %d\n", x, y );
    
    r = &q;
    **r = 8; // equiv to *q = 8   equiv to y = 8
    printf( "\nx:%d y: %d\n", x, y );
    
    
    
    return 0;
}
