#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("give anynumber:");
	scanf("%d",&a);
	
	printf("give anynumber:");
	scanf("%d",&b);
	
	printf("give anynumber:");
	scanf("%d",&c);
	if(a>=b && a>=c)
	{
		printf("\nA is max");
	}
	else if(b>=c && b>=a)

	{
		printf("\nB is max");
	}
	else 
	{
		printf("\nC is max");
		
	}
}
