#include<stdio.h>  
int main()  
{  
    int y;  
  
    printf("Enter the year\n");  
    scanf("%d", &y); 
  if(y%4==0 && y%100!=0)
  {
    printf("The year is leap");
  }
  else if(y%400==0)
  {
    printf("The year is century leap year");
  }
  else if(y%100==0)
  {
    printf("The year is century year but not leap year");
  }
  else
  {
    printf("It is neither a century year nor leap year");
  }
  return 0;
} 