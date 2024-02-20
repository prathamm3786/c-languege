#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	printf("Enter value of d : ");
	scanf("%d",&d);

	if(a<b){
		if(a<c){
			if(a<d){
				printf("a is min");
			}else{
				printf("d is min");
			}
		}else{
			printf("c is min");
		}
	}else{
		if(b<c){
			if(b<d){
				printf("b is min");
			}else{
				printf("d is min");
			}
		}else{
			if(c<d){
				printf("c is min");
			}else{
				printf("d is min");
			}
		}
	}
}
