
#include <stdio.h>

main() {
    char name[50];
    int i,len, count[256] = {0}; 

    printf("Enter any string: ");
    gets(name); 
	
	len=strlen(name);
    
    for (i = 0; i < len; i++) {
        count[name[i]]++;
    }

 
    printf("Frequency of each lowercase letter: \n");
    for (i = 97; i <= 122; i++) {
        if ((char)count[i] != 0) {
            printf("%c => %d\n", i, count[i]);
        }
    }

}

