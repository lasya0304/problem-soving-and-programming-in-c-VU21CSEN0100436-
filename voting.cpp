#include<stdio.h>
int main()
{
    int a;	
    printf("enter age");
	scanf("%d" ,&a);
	if (a>=18)
	{
	printf("you are eligible");
    }
	else
	{
	printf("you are not eligible");
    }
	return 0;
}