#include<stdio.h>
void main()
{
  int month_number;
  printf("enter the month number which you want to print the name");
  scanf("%d",&month_number);
  switch(month_number)
  {
    case 1:
      printf("january");
      break;
    case 2:
      printf("faburary");
      break;
    case 3:
      printf("march");
      break;
    case 4:
      printf("april");
      break;
    case 5:
      printf("may");
      break;
    case 6:
      printf("june");
      break;
    case 7:
      printf("july");
      break;
    case 8:
      printf("augest");
      break;
    case 9:
      printf("septembar");
      break;
    case 10:
      printf("octombar");
      break;
    case 11:
      printf("noverbar");
        break;
    case 12:
      printf("decembar");
      break;
    default:
      printf("you have enter wrong choice please enter between 1 to 12");
      break;
  }
} 
