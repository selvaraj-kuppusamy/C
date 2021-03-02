#include"stdio.h"
int main()
{
int a[100],n=0,i;
printf("Enter the number: \n");
scanf("%d",&n);
printf("Enter the %d number: \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The Arrays are: \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
