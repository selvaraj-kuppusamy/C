#include"stdio.h"
#include"stdlib.h"
int main()
{
 int number;
 printf("ENTER THE CHOICE : \n1.Poweroff\n2.Restart\n3.cancel\n");
 scanf("%d",&number);
 switch(number)
 {
	 case 1 : system("poweroff");
		  break;

	 case 2 : system("reboot");
		  break;
	 
	 case 3 : printf("cancle");
		  break;
	 
	 default: printf("Invalid Operation");
 }
return 0;
}
