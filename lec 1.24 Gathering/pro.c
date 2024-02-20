#include<stdio.h>

void plus(int a,int b){
	int t;
	t=a+b;
	printf("plus of %d + %d = %d ",a,b,t);
	
}
void minus(int a,int b){
	int t;
	t=a-b;
	printf("mainus of %d - %d = %d ",a,b,t);
}
void multiplication(int a,int b){
	int t;
	t=a*b;
	printf("multilication of %d * %d = %d ",a,b,t);
}
void division(int a,int b){
	int t;
	t=a/b;
	printf("division of %d / %d = %d ",a,b,t);
}
void modulo(int a,int b){
	int t;
	t=a%b;
	printf("modulo of %d % %d = %d ",a,b,t);
}

void main(){
	int i,n;
	int choice;
	
	printf("Enter the number of A :- ");
	scanf("%d",&i);
	printf("Enter the number of B :- ");
	scanf("%d",&n);
	
	       
	printf("Press 1 for + \n");
 	printf("Press 2 for - \n");
    printf("Press 3 for * \n");
	printf("Press 4 for / \n");
	printf("Press 5 for % \n");
	printf("Press 0 for the exit\n");
			
	printf("Enter the number :- ");
    scanf("%d",&choice);
    
    do{
    	switch(choice){
    			case 1:
    				    plus(i,n); 
    					break;
    			case 2:
						minus(i,n);
						break;
				case 3:
    					multiplication(i,n);
    					break;
    			case 4:
						division(i,n);
						break;
				case 5:	
						modulo(i,n);
						break;
				default:
                        printf("exit");
                        break;		
											
		}
    	
	}while(choice=0);
	
}
