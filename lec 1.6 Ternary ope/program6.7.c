#include<stdio.h>
main(){
int categories,english,gujarati,hindi;

printf("Press 1 for English.\n");
printf("Press 2 for Hindi.\n");
printf("Press 3 for Gujarati.\n");
printf("Please press given number for your Choice : ");
scanf("%d",&categories);
switch(categories){
	case 1:
		printf("Press 1 for Internet Recharge.\n");
		printf("Press 2 for Top-up Recharge.\n");
		printf("Press 3 for Special Rechage.\n");
		printf("Please Choose your Recharge pack : ");
		scanf("%d",&english);
switch(english){
	case 1:
		printf("You have successfully done Internet Recharge.\n");
		break;
	case 2:
		printf("You have successfully done Top-up Recharge.\n");
		break;
	case 3:
		printf("You have successfully done Special Recharge.\n");
		break;
	default:
		printf("Your Recharge Pack is not Available...\n");
		break;
}
break;
	case 2:
		printf("Internet Recharge ke liye 1 dabaye.\n");
		printf("Top-up Recharge ke lie 2 dabaye.\n");
		printf("Special Recharge ke liye 3 dabaye.\n");
		printf("Kripya apna Recharge pack pasand kijiye : ");
		scanf("%d",&hindi);
		switch(hindi){
			case 1:
				printf("Apne safaltapurvak Internet Recharge kar liya hain.\n");
				break;
			case 2:
				printf("Apne safaltapurvak Top-up Recharge kar liya hain.\n");
				break;
			case 3:
				printf("Apne safaltapurvak Special Recharge kar liya hain.\n");
				break;
	default:
		printf("Apka Recharge pack uplabdh nahi hain...\n");
		break;
}
break;
	case 3:
		printf("Internet Recharge na mate 1 dabavo.\n");
		printf("Top-up Recharge mate 2 dabavo.\n");
		printf("Special Recharge mate 3 dabavo.\n");
		printf("Kripya tamaro Recharge pack pasand karo :  ");
		scanf("%d",&gujarati);
		switch(gujarati){
			case 1:
				printf("Tame safrtapurvak Internet Recharge karyu chhe. \n");
				break;
			case 2:
				printf("Tame safrtapurvak Top-up Recharge karyu chhe.\n");
				break;
			case 3:
				printf("Tame safrtapurvak Special Recharge karyu chhe.\n");
				break;
	default:
		printf("Tamaro Recharge pack uplabdh nathi...\n");
		break;
}
	break;
default:
	printf("Your Recharge Pack is not Available...\n");
	break;
}

}
