#include<stdio.h>
struct book
{
    int book_id;
    char title[20];
    float price;
};
 struct book input()
 {
    struct book x;
    printf("enter book_id ,title & price:");
    scanf("%d",&x.book_id);
    fflush(stdin);
    gets(x.title);
    scanf("%f",&x.price);
    return(x);
 };
 void display( struct book x)
 {
     printf("\nid no. = %d\ntitle = %s\nprice == $%.2f",x.book_id,x.title,x.price);
 }
void main()
{
    struct book b1 ;
    b1=input();
    display(b1);
    getch();
}
