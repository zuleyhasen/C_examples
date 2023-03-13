//en büyük sayıyı bulma
#include<stdio.h>
int max_of_two( int x, int y ){
    printf( "\n\nmax_of_two runs with %d %d \n\n", x, y );
    if( x > y ) {
        return x;
    }
    else{
    return y;
    }
}
int max_of_three( int p, int q, int r ){
    printf( "\n\nmax_of_three runs with %d %d %d \n\n", p, q, r );
    return max_of_two( max_of_two( p, q ), r );
}
int max_of_four( int k, int l, int m, int n ){
    printf( "\n\nmax_of_four runs with %d %d %d %d \n\n", k, l, m, n );
    return max_of_two( max_of_three( k, l, m ), n );
}
int max_of_four_new( int k, int l, int m, int n ){
    printf( "\n\nmax_of_four_new runs with %d %d %d %d \n\n", k, l, m, n );
    return max_of_two( max_of_two( k, l ), max_of_two( m, n ) );
}
 
 int main(){
    int a, b, c, d, max;
    printf( "Enter four integers: " ); scanf( "%d%d%d%d", &a, &b, &c, &d );
    max = max_of_four_new( a, b, c, d );
    
    printf( "\n\nMax is: %d.\n\n", max );
}