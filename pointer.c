#include"stdio.h"
int main()
{
	int var,*ip;
	ip=&var;
	scanf("%d",&var);
	printf("%d\n",&var);
	printf("%d\n",ip);
	printf("%d\n",*ip);
	return 0;
}
