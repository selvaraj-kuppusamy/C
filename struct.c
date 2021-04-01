#include<stdio.h>
#include<string.h>
struct student{
	char rollno[10];
	char firstname[10];
	char middlename[10];
	char lastname[10];
	char sex[10];
	int sub1;
	int sub2;
	int sub3;
	int sub4;
	int sub5;
	int total,Average;
	int dd;
	int dm;
	int dy;
	
	char grade[1];
}s[10];
int main()
{
	int i,n;
	printf("Enter the Number of students: \n");
	scanf("%d",&n);
	printf("Enter the information of students\n");
	for(i=0;i<n;i++)
	{
	printf("Enter Students number %d\n",i+1);
	printf("Enter the Rollno: ");
	scanf("%s",s[i].rollno);
	printf("Name\n");
	printf("Enter the Firstname: ");
	scanf("%s",s[i].firstname);
	printf("Enter the Middlename: ");
	scanf("%s",s[i].middlename);
	printf("Enter the Lastname: ");
	scanf("%s",s[i].lastname);
	printf("Enter the sex: ");
	scanf("%s",s[i].sex);
	printf("Date of Birth\n");
	printf("Enter the Day: ");
	scanf("%d",&s[i].dd);
	printf("Enter the month: ");
	scanf("%d",&s[i].dm);
	printf("Enter the year: ");
	scanf("%d",&s[i].dy);
	printf("Enter the Five Subjects marks: ");
	scanf("%d%d%d%d%d",&s[i].sub1,&s[i].sub2,&s[i].sub3,&s[i].sub4,&s[i].sub5);
	printf("Enter the Grade : ");
	scanf("%s",s[i].grade);
	}
	printf("\n");
	printf("Students mark list\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Students number %d\n",i+1);
		printf("Rollno: %s\n",s[i].rollno);
		printf("Name: %s%s%s\n",s[i].firstname,s[i].middlename,s[i].lastname);
		printf("sex: %s\n",s[i].sex);
		printf("Date of Birth: %d/%d/%d\n",s[i].dd,s[i].dm,s[i].dy);
	 	s[i].total=s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5;
                s[i].Average=s[i].total/5;
		printf("Marks: %d\n",s[i].Average);
		printf("Grade: %s\n",s[i].grade);
	}
	printf("\n");
	printf("Students less than 40\n");
	for(i=0;i<n;i++)
	{
		if(s[i].Average<=40)
		{
		printf("Rollno: %s\n",s[i].rollno);
                printf("Name: %s%s%s\n",s[i].firstname,s[i].middlename,s[i].lastname);
                printf("sex: %s\n",s[i].sex);
                printf("Date of Birth: %d/%d/%d\n",s[i].dd,s[i].dm,s[i].dy);
                printf("Marks: %d\n",s[i].Average);
                printf("Grade: %s\n",s[i].grade);
		}
		else
		{
			continue;
		}
	}
	return 0;
}

