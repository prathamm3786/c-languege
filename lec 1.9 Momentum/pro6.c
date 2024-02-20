#include<stdio.h>
main(){
	int day;
	printf("Enter Month number :");
	scanf("%d",&day);
	
	switch(day){
		case 1:
			printf("It's a January");
			break;
		case 2:
			printf("It's a February");
			break;
		case 3:
			printf("It's a March");
			break;
		case 4:
			printf("It's a April");
			break;
		case 5:
			printf("It's a May");
			break;
		case 6:
			printf("It's a June");
			break;
		case 7:
			printf("It's a July");
			break;
		case 8:
			printf("It's a August");
			break;
		case 9:
			printf("It's a September");
			break;
		case 10:
			printf("It's a Octomber");
			break;
		case 11:
			printf("It's a November");
			break;
		case 12:
			printf("It's a December");
			break;
		default:
			printf("Invalid Entry");
			
		
	}
	
}
