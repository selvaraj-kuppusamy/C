#include"stdio.h"
#define B 1
void main()
{
	clrscr();
	#if !defined(A)
	#error MACROB A IS NOT FOUND.
	#else
	printf("macro is found");
	#endif
}
