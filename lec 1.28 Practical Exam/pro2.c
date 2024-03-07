#include<stdio.h>
main(){
	const float pi = 3.14;
	float rad,area,circum;
	printf("Enter the value circle Radius : ");
	scanf("%f",&rad);
	circum=(2*pi)*rad;
	area=pi*(rad*rad);
	printf("Area of the circle is : %.2f.\n",area);
	printf("Circumference of the circle is : %.2f.",circum);
}
