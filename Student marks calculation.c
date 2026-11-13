#include<stdio.h>
int main ()
{
float marks;
printf("entre your marks");
scanf("%f", &marks);
if (marks>=35){
printf("your exam is passed ");

 if (marks>=85)
printf("A grade ");
else 
printf(" B grade");
}
else  {
printf("your exam is f ");}
return 0;
}
