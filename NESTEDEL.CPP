#include<stdio.h>
#include<conio.h>

main()
{
int marks;
clrscr();

printf("enter marks :\n");
scanf("%d",&marks);

if(marks>=90)
printf("A+ Grade");

else if(marks>=80)
printf("A Grade");

else if(marks>=70)
printf("B+ Grade");

else if(marks>=60)
printf("B Grade");

else if(marks>=50)
printf("C Grade");

else
printf("Low Marks");

getch();
}