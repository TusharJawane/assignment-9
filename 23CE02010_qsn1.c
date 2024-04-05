#include<stdio.h>
#include<string.h>
void main()
{
    struct company
    {
        char name[50];
        char address[500];
        int phone;
        long long NoOfEmployees;
    };
    struct company s1;
    printf("Enter name of company\n");
    gets(s1.name);
    printf("Enter address of company\n");
    gets(s1.address);
    printf("Enter phone number of company\n");
    scanf("%d",&(s1.phone));
    printf("Enter  number of employees\n");
    scanf("%d",&(s1.NoOfEmployees));
    printf("%s\n%s\n%d\n%d",s1.name,s1.address,s1.phone,s1.NoOfEmployees);
}