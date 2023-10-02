#include<stdio.h>
int main()
{    int a;
     printf("enter the number ");
     scanf("%d",& a);
     if(a>0)
     {
     	printf("the no, is positive ",a);
	 }
	 else if(a<0)
     printf("the no. is negative",a);
     
     else 
     printf(" no. is equal to zero ",a);
     
    
	return 0;
}
