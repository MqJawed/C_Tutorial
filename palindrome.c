#include<stdio.h>
void main()
{int number,remainder,revnumber=0;
printf("Enter the number: ");
scanf("%d",&number);
int temp=number;
while(number>0)
{remainder=number%10;
revnumber=(revnumber*10)+remainder;
number=number/10;
}
if (temp==revnumber)
printf("The number is palindrome");
else
printf("The number is not palindrome");
}