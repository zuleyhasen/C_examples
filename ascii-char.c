#include <stdio.h>
//ASCİİ
#include<stdlib.h> 

void correct()
{
	char x,y;
	printf("enter a char: ");
	scanf("%c",&x);
	printf("ascii %d, char -%c-\n",x,x);
	printf("enter a char: ");
	scanf(" %c",&y);
	printf("ascii %d, char -%c-\n",y,y);
	
}

void incorrect()
{
	char x,y;
	printf("enter a char: ");
	scanf("%c",&x);
	printf("ascii %d, char -%c-\n",x,x);
	printf("enter a char: ");
	scanf("%c",&y);
	printf("ascii %d, char -%c-\n",y,y);
	
}

int main()
{
	//correct();
	incorrect();

	return 0;
}