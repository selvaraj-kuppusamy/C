#include"stdio.h"
#include"stddef.h"
int main()
{
printf("\nDATE     :%s",__DATE__);
printf("\nTIME     :%s",__TIME__);
printf("\nFILE NAME:%s",__FILE__);
printf("\nLINE NO  :%d",__LINE__);
return 0;
}