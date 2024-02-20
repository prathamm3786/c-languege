#include<stdio.h>
main(){
	int unit ;
	float total , sum , ans;
	printf("Enter electricity unit amount: ");
	scanf("%d",&unit);
	
	
	if(unit<=50){
	total=unit*0.50;
}

else if (unit<=150){
	total=25+((unit-50)*0.75);
}
else if(unit<=250){
	total=100+((unit-150)*1.20);
}
else{
	total=220+((unit-250)*1.50);
}
sum=total*0.20;
ans=total+sum;
printf("Total Electicity Bill : Rs.  %.2f",ans);
}
