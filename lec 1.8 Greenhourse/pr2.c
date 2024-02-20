#include<stdio.h>

main(){
	
	int salary , hra , da , ta , total;
	
	printf("enter base salary :");
	scanf("%d",&salary);
	
	printf("enter base HRA :");
	scanf("%d",&hra);
	
	printf("enter base DA :");
	scanf("%d",&da);
	
	printf("enter base TA :");
	scanf("%d",&ta);
	
	total = hra + salary + da + ta ;
	
	printf("gross salary is  : %d",total);
}
