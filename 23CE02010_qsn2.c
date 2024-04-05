#include<stdio.h>
#include<string.h>
void main()
{
    struct students
    {
        int Rollno;
        char name[50];
        char address[500];
        int age;
        int avgMarks;
    };
    struct students a[6];
    for(int i=0;i<6;i++)
    {
        printf("\nEnter details of Student number %d\n",i);
        scanf("%d",&(a[i].Rollno));
        gets(a[i].name);
        gets(a[i].address);
        scanf("%d",&(a[i].age));
        scanf("%d",&(a[i].avgMarks));
    }
    for(int i=0;i<6;i++)
    {
        printf("%d\n",&(a[i].Rollno));
        puts(a[i].name);
        puts(a[i].address);
        printf("%d\n",&(a[i].age));
        printf("%d\n",&(a[i].avgMarks));
    }
}