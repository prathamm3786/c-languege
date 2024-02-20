#include<stdio.h>
main(){
	int a;
	printf("Enter student's score under 100% : ");
	scanf("%d",&a);
	if(a>90){
		printf("student scored A+ grade");
	}
	else if(a>80){
		printf("student scored A grade");
	}
	else if(a>75){
		printf("student scored B+ grade");
	}
	else if(a>70){
		printf("student scored B grade");
	}
	else if(a>60){
		printf("student scored C grade");
	}
	else if(a>50){
		printf("student scored D grade");
	}
	else {
		printf("student scored E grade");
	}
	
	
}
