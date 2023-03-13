//asal bulma
#include<stdio.h>
#include<math.h>
#define FALSE 0
#define TRUE 1
int is_prime( int );
 int main(){
     
    int n;
    printf( "Enter an integer: " );
    scanf( "%d", &n );
     
    
    if( is_prime( n ) ) printf( "Your number is a prime number.\n " );
    else printf( "Your number is not a prime number.\n " );
     
    printf( "\n\n" );
     
}
int is_prime( int n ){
    
    int limit = (int) sqrt( (double) n ), k = 2;
    
    while( k <= limit ){
        if( n % k == 0 ) return FALSE;
        k++;
    }
    return TRUE;
}
 