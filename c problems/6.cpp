#include<stdio.h>
int main()
{
   	int num,d,rem,Q; 
	printf("enter the  value of num :\n");
	scanf("%d",&num);
	printf("enter the  value of d :\n");
	scanf("%d",&d);
	rem=num%d;
	printf("the remainder is %d :",rem);
	Q=num/d;
	printf("the Quotient  is %d :",Q);
	return 0;
}
