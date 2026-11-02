#include <stdio.h>
struct student
{
char name[20];
int rollno;
char contactno[15];
char course[20];
char place[30];
char ambition[30];
};
void read(struct student s[],int n);
void write(struct student s[],int n);
int main()
{
struct student s[100];
int n;
printf("Enter number of students:");
scanf("%d", &n);
read(s,n);
write(s,n);
return 0;
}
void read(struct student s[], int n)
{
int i;
for(i=0; i<n; i++)
{
printf("\n---DETAILS OF STUDENT---%S\n", i+1);
printf("Enter Name:");
scanf("%s",&s[i].name);
printf("Enter Roll number:");
scanf("%d",&s[i].rollno);
printf("Enter course:");
scanf("%s" ,&s[i].course);
printf("Enter contact number:");
scanf("%s" ,&s[i].contactno);
printf("Enter place:");
scanf("%s" ,&s[i].place);
printf("Enter ambition:");
scanf("%s" ,&s[i].ambition);
}
}
void write(struct student s[],int n)
{
int i;
printf("\n----STUDENT APPLICATION---\n");
for(i=0; i<n; i++);
{
printf("\nstudent%d\n",i+1);

printf("Name: %s\n",s[i].name);
printf("Roll no: %d\n",s[i].rollno);
printf("Course: %s\n",s[i].course);
printf("Contactno: %s\n",s[i].contactno);
printf("Place: %s\n",s[i].place);
printf("Ambition: %s\n",s[i].ambition);
}
}