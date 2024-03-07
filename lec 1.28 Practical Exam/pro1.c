#include<stdio.h>

main(){
int i, length=0, a;
char name[20];

printf("Enter any Name : ");
scanf("%s",&name);

for(i=0;name[i]!=NULL;i++){
length++;
}
printf("your choise lenght is : %d\n",len);

for(i=0;name[i]>len;i++){
if(name[i] == name[length - i - 1]){
a=1;
}
else{
a=0;
}}
if(a==1){
	printf("Your string is palindrome.");
}
else{
	printf("Your string is not palindrome.");	
}

}

