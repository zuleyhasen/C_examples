// return min and max of an array
#include <stdio.h>
#define SIZE 10
void min_max( int *p, int size, int *min, int *max ){
    int i;
    
    if( *p > *(p+1) ){
        *max = *p;
        *min = *(p+1);
    }
    else{
        *max = *(p+1);
        *min = *p;
    }
    
    p += 2;
    
    for( i = 2; i < size; i++ ){
        if( *p > *max ){
            *max = *p;
        }
        else{
            if( *p < *min ){
                *min = *p;
            }
        }
        p++;
    }
}
int main(){
    int A[ SIZE ] = { 1, 2, 3, -8, 6, 1, 2, 3, 2, 1 }, min, max;
    
    min_max( A, SIZE, &min, &max );
    printf( "min: %d max: %d.\n", min, max );
    
    return 0;
}
