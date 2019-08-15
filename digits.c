# digits
#include<stdio.h>
int main()
{
int Number,Remainder,Count=0;
printf("\n Enter any Number \n");
scanf("%d",&Number);
while(Number>0)
{
Number=Number/10;
Count=Count+1;
}
printf("\n Number of digits in a given Number=%d",Count);
getch();
}
