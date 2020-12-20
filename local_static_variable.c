#include"stdio.h"
void fun()
{
	static int x;
	printf("%d",x);
	x=x+1;
}
int main()
{
	fun();
	fun();
	fun();
	return 0;
}
