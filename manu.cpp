#include<stdio.h>
main(){
	
	char name [50];
	char want [50];
	int price,total;
	long int oty;

	
	printf("wlecom\n");
	printf("what is yourname:\n");
	scanf("%s",&name);
	
	printf("whatyou want:\n");
	scanf("%s",&want);
	
	printf("what is price:\n");
	scanf("%d",&price);
	
	printf("how many:\n");
	scanf("%ld",&oty);

	total=price*oty;
	
	printf("\n-----bill-----\n");
	printf("\nitem:,%c",want);
	printf("\namount:%d",price);
	printf("\nnumber of item:%i",oty);
	printf("\nbill aumount:%d",total);

		
	
}
