#include<stdio.h>
void main()
{
  int num1,num2,sum,sub,mult,div,rem;
  printf("enter the value of num1 and num2");
  scanf("%d%d",&num1,&num2);
  sum=num1+num2;
  printf("Addition = %d",sum);
  sub=num1-num2;
  printf("subtraction = %d",sub);
  mult=num1*num2;
  printf("multiplication = %d"mult);
  div=num1/num2;
  printf("division = %d"div);
  rem=num1%num2;
  printf("remander = %d",rem);
 }
