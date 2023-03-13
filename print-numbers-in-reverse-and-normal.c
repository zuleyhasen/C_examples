//print numbers in reverse
#include<stdio.h> 
void print_reverse( int );
int main( void ) {
    int n;
    printf( "Enter n: " ); scanf( "%d", &n );
    print_reverse( n );
    
    printf( "\n\n" );
    return 0;    
}
void print_reverse( int n ){
    while( n ){
        printf( "%d ", n % 10 );
        n /= 10;
    }
}
---------------------------------------------------------
//print numbers

#include<stdio.h> 
void print_normal( int );
int main( void ) {
    int n;
    printf( "Enter n: " ); scanf( "%d", &n );
    print_normal( n );
    
    printf( "\n\n" );
    return 0;    
}
void print_normal( int n ){
    
    int temp = n, power = 1;
    while( temp > 9 ){
        power *= 10;
        temp /= 10;
     }
     
    
    while( n ){
        temp = n / power;
        n -= temp * power;
        power /= 10;
        printf( "%d ", temp );
    }
    
}
