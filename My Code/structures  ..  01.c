#include<stdio.h>
struct student
{
    int roll_no,age;
    char name[25];
};
struct student input()
{
    struct student x;
    printf("enter student roll_no,name,&age:");
    scanf("%d",&x.roll_no);
    fflush(stdin);
    gets(x.name);
    scanf("%d",&x.age);
    return(x);
};
 void display (struct student x)
 {
     printf("\nroll_no = %d\nname = %s\nage = %d",x.roll_no,x.name,x.age);
 }
 void main()
 {
     struct student s;
     s=input();
     display(s);
     getch();
 }
