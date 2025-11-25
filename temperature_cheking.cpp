#include<stdio.h>
main(){
	float A;
	printf("what is temperature:");
	scanf("%f",&A);
	
	if(A>40.5)
	{
		printf("it's hot");
		
	}
	 else if(A>=25 && A<=40.5)
	{
	printf("its normal");
    }
    else
    {
    	printf("its cold");
	}
}
