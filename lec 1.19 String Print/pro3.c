#include<stdio.h>
main(){
	char word[200];
	int i;
	
	printf("Enter any word for string : ");
	scanf("%199[^\n]", word);
	
	for(i=0;word[i] != '\0';i++){
		if(word[i]>='A' && word[i]<='Z'){
			word[i]+=32;
		}
		else if(word[i]>='a' && word[i]<='z'){
			word[i]-=32;
		}
		
	}
	printf("\n\nThe string output is : \n\n %s",word);
	
}
