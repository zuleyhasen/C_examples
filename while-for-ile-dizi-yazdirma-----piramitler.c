#include<stdio.h>
//while ile 10a kadar yazdırma
int main( void ) {
    int i;
    i = 1;
    while( i <= 10 ){ 
        printf( "%d ", i );
        i++; 
    }
    printf( "\n\n" );
  ---------------------------------------------------------------------------
  
 //for ile 10 a kadar yazdırma 
    for( i = 1; i <= 10; i++ ){
        printf( "%d ", i );
    }
    
    printf( "\n\n" );
    return 0;    
}

------------------------------------------------------------------------------

//decreasing by 5 from 100 to 50

#include<stdio.h>
int main( void ) {
    int i;
    
    for( i = 100; i >= 50; i = i - 5 ){
        printf( "%d ", i );
    }    
    
    printf( "\n\n" );
    return 0;    
}

------------------------------------------------------------------------------


/* 0 1 2 3 ... 9
 * 0 1 2 3 ... 9
 * in total 10 rows
 * 0 1 2 3 ... 9
*/
#include<stdio.h>
int main( void ) {
    int i, j;
    
    for( i = 0; i < 10; i++ ){ 
        for( j = 0; j <= 9; j++ ){
            printf( "%d ", j );
        }    
        printf( "\n" );
    }    
    
    printf( "\n\n" );
    return 0;    
}

------------------------------------------------------------------------------


/*0 0 0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 1 1 1
2 2 2 2 2 2 2 2 2 2
...
9 9 9 9 9 9 9 9 9 9
*/
#include<stdio.h>
int main( void ) {
    int i, j;
    
    for( i = 0; i < 10; i++ ){
        for( j = 0; j < 10; j++ ){
            printf( "%d ", i );
        }    
        printf( "\n" );
    }    
    
    printf( "\n\n" );
    return 0;    
}
------------------------------------------------------------------------------

/* 
 * 1
 * 2 2
 * 3 3 3
 * ...
 * 9 9 9 9 9 9 9 9 9
*/
#include<stdio.h>
int main( void ) {
    int i, j;
    
    for( i = 0; i < 10; i++ ){
        for( j = 0; j < i; j++ ){
            printf( "%d ", i );
        }        
        printf( "\n" );
    }    
    
    printf( "\n\n" );
    return 0;    
}

------------------------------------------------------------------------------

/* 
 *                 9
...
 *       456789
 *     3456789
 *   23456789
 * 123456789
*/
#include<stdio.h>
int main( void ) {
    int i, j;
    
    for( i = 9; i >= 1; i-- ){
        for( j = 1; j <= 9; j++ ){
            if( j < i ) printf( " " ); else printf( "%d", j );
        }        
        printf( "\n" );
    }
    
    printf( "\n\n" );
    // OR
    
    for( i = 9; i >= 1; i-- ){
        for( j = 0; j < i-1; j++ ) printf( " " );
        for( j = i; j < 10; j++ ) printf( "%d", j );
        printf( "\n" );
    }
    
    printf( "\n\n" );
    return 0;    
}
----------------------------------------------------------------------
/* read the base (n) from the user
 *     1
 *    123
 *   12345
 *  1234567
 * 123456789
 * the number of spaces on the first line is n/2
*/
#include<stdio.h>
int main( void ) {
    int i, j, n, spaces, last;
    printf( "Enter n: " ); scanf( "%d", &n );
    last = 1;
    for( spaces = n / 2; spaces >= 0; spaces--){
        for( i = 0; i < spaces; i++ ) printf( " " );
        for( i = 1; i <= last; i++ ) printf( "%d", i );
        last += 2;
        printf( "\n" );
    }
    
    
    
    printf( "\n\n" );
    return 0;    
}
------------------------------------------------------------------------------
/* read the height (h) from the user
 *        *
 *       **
 *      ***
 *     ****
*/
#include<stdio.h>
int main( void ) {
    int i, j, h, spaces, stars;
    printf( "Enter h: " ); scanf( "%d", &h );
    for( spaces = h - 1, stars = 1; spaces >=0; spaces--, stars++ ){
        for( i = 0; i < spaces; i++ ) printf( " " );
        for( i = 0; i < stars; i++ ) printf( "*" );
        printf( "\n" );
    }
    
    
    printf( "\n\n" );
    return 0;    
}

