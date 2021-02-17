#include"stdio.h"
int main()
{
	int number_1,number_2;//10,20
	printf("Enter the Two Numbers:\n ");
	scanf("%d%d",&number_1,&number_2);
	number_1=number_1+number_2;//30
	number_2=number_1-number_2;//10
	number_1=number_1-number_2;//20
	printf("NUMBER_1=%d\nNUMBER_2=%d",number_1,number_2);
	return 0;
}
