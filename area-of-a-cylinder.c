/* Write functions to find the are of a cylinder*/
#include<stdio.h>
#include<math.h>
double rectangle( double, double );
double circle( double );
double cylinder( double, double );
int main( ){
    double r, h, area;
    printf( "Enter r and h: " );
    scanf( "%lf %lf", &r, &h );
    // when you declare a function, it doesn't mean that that function will always
    // be called inside main. Other functions can call that function also.
    area = cylinder( r, h );
    printf( "The area is: %f.\n\n", area );
    
    return 0;
}
double rectangle( double a, double b ){
    printf( "The rectangle function runs with %f %f.\n\n", a, b );
    return a * b;
}
double circle( double r ){
    printf( "The circle function runs with %f.\n\n", r );
    return M_PI * r *r;
}
double cylinder( double r, double h ){
    printf( "The cylinder function runs with %f %f.\n\n", r, h );
    return 2 * circle( r ) + rectangle( 2 * M_PI * r, h );
}
