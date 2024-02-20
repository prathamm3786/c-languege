#include<stdio.h>
main(){
	int a,b,c;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("a is min");
		}
		else{
			printf("c is min");
		}
	}
	else{
		if(b<c){
			printf("b is min");
		}
		else{
			printf("c is min");
		}
	}
}
