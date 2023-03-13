//çift ve 5 e bölünebilme
#include <stdio.h>

int main()
{

	int number;

	printf("enter a number:");
	scanf("%d", &number);

	if( number%2==0 && number%5==0)
	{
		printf("%d is valid \n", number);
	}else
		printf("%d is invalid\n", number);


	return 0;
}
