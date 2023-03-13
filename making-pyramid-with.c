//piramit yapma
#include<stdio.h> 
void print_triangle( int );
int main( void ) {
    int base;
    printf( "Enter base: " ); scanf( "%d", &base );
    print_triangle( base );
    
    printf( "\n\n" );
    return 0;    
}
void print_triangle( int base ){
    int i, star = 1;
    while( star <= base ){
        
        i = 0;
        while( i < star ){
            printf( "*" );
            i++;
        }
        printf( "\n" );
        star++;
    }
}
