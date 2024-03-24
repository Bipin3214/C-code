#include<stdio.h>
#include<conio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
	char section[20];
	char address[20];
	char gender[30];
	char branch[25];
};
int main()
{
	struct student s;
	printf("Enter the information of student :\n");
	printf("Enter name :");
	scanf("%s",&s.name);
	printf("Enter roll :");
	scanf("%d",&s.roll);
	printf("Enter marks :");
	scanf("%f",&s.marks);
	printf("Enter section :");
	scanf("%s",&s.section);
	printf("Enter address :");
	scanf("%s",&s.address);
	printf("Enter gender :");
	scanf("%s",&s.gender);
	printf("Enter branch :");
	scanf("%s",&s.branch);
	printf("\n displaying information\n");
	printf("Name:%s\n",s.name);
	printf("Roll:%d\n",s.roll);
	printf("Marks:%f\n",s.marks);
	printf("Section:%s\n",s.section);
	printf("Address:%s\n",s.address);
	printf("Gender:%s\n",s.gender);
	printf("Branch:%s\n",s.branch);
	return 0;
}

