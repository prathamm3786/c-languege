#include<stdio.h>
main(){
	int a,b,c,d,e,f;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	printf("Enter value of d : ");
	scanf("%d",&d);
	printf("Enter value of e : ");
	scanf("%d",&e);
	printf("Enter value of f : ");
	scanf("%d",&f);
	
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					if(a>f){
						printf("a is big");
					}
					else{
						printf("f is big");
					}
				}
				else{
					printf("e is big");
				}
			}
			else{
				printf("d is big");
			}
		}
		else{
			printf("c is big");
		}}
	else{
		if(b>c){
			if(b>d){
				if(b>e){
					if(b>f){
							printf("b is big");
					}
					else{
						printf("f is big");
					}
				}
				else{
					printf("e is big");
				}
			}else{
				printf("d is big");
			}
		}else{
			if(c>d){
				if(c>e){
					if(c>f){
						printf("c is big");
					}
					else{
						printf("f is big");
					}
				}
				else{
					printf("e is big");
				}
			}else{
				if(d>e){
					if(d>f){
						printf("d is big");
					}
					else{
						printf("f is big");
					}
				}
				else{
					if(e>f){
						printf("e is big");
					}
					else{
						printf("f is big");
					}
				}
			}
		}
	}
}
