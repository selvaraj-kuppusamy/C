#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[50];
}s1,s2;
int main()
{
	s1.id=149;
	s2.id=199;
	strcpy(s1.name,"selvraj");
	strcpy(s2.name,"linux torvalds");
	printf("Student 1 id : %d\n",s1.id);
	printf("Student 1 name : %s\n",s1.name);
	printf("Student 2 id : %d\n",s2.id);
	printf("Student 2 name : %s\n",s2.name);
	return 0;
}
