//çıkartma işlemi
#include<stdio.h>

void main()
{
    int x,y,result;
    printf("enter two number: ");
    scanf("%d %d", &x, &y);

    if( x > y )
        result = x - y;
    else
        result = y - x;
    printf("result: %d\n",result);


    printf("enter two number: ");
    scanf("%d %d",&x,&y);
return 0;
} 




