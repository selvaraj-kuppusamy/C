//	FACTORIAl PROGRAM
#define PLAY printf
#define ADRS scanf
int fact=1,i=1,n;
#define FACTORIAL(n) for(i;i<=n;i++) {	  fact=fact*i;	} printf("THE FACTORIAL OF %d = %d",n,fact);
#define FUNCTION main()
FUNCTION
{

	clrscr();
	PLAY("ENTER THE NUMER: ");
	ADRS("%d",&n);
	FACTORIAL(n);
   getch();
   return 0;
}