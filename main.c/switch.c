#include<stdio.h>

void main()

{

int age , marks;
printf("Enter your age\n");
scanf("%d", &age); 
printf("Enter your marks\n");
scanf("%d", &marks);

switch(age)

{
  case 3:
  printf("the age is 3\n");
   switch(marks)
 {

case 20:
   printf("your marks is 20\n");
   break;

   default:
   printf("your marks is not 20\n");



 }
 break;
case 10:
printf("The age is 10");
    break;

 default:
 printf("THe age is 13");
 break;



}


}