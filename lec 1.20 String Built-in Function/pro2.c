#include <stdio.h>
main() {
    int i, len_pass, com = 0, len_mail, upr = 0, lwr = 0, num = 0, spec = 0 , stop=1;

    char f_pass[11], f_mail[31], pass[11], email[31];

    printf("Enter your e-mail: ");
    gets(f_mail);

    printf("Enter your password: ");
    gets(f_pass);

    len_mail = strlen(f_mail);
    len_pass = strlen(f_pass);

    for (i = 0; i < len_mail; i++) {
        if (f_mail[i] >= 97 && mail[i] <= 122)
            lwr++;
        if (f_mail[i] == '@')
            com++;
    }
    if (lwr > 0 && com == 1 && mail[len_mail - 1] == 'm' && mail[len_mail - 2] == 'o' && mail[len_mail - 3] == 'c' && mail[len_mail - 4] == '.' && mail[len_mail - 5] == 'l' && mail[len_mail - 6] == 'i' && mail[len_mail - 7] == 'a' && mail[len_mail - 8] == 'm') {
        printf("Your E-mail is correct.\n");
    }
	 else {
        printf("Your E-mail is incorrect.\n");
        stop++;
    }
    if(stop>0){
    	
	}

    for (i = 0; i < len_pass; i++) {
        if (pswd[i] >= 65 && pswd[i] <= 90)
            upr++;
        if (pswd[i] >= 97 && pswd[i] <= 122)
            lwr++;
        if (pswd[i] >= 48 && pswd[i] <= 57)
            num++;
        if (pswd[i] == '@' || pswd[i] == '#' || pswd[i] == '$' || pswd[i] == '_')
            spec++;
    }

    if (upr > 0 && num > 0 && lwr > 0 && spec > 0 && len_pass >= 6 && len_pass <= 10) {
        printf("Your Password is Strong.\n");
    } else {
        printf("Your Password is Weak.\n");
    }

    printf("Enter your e-mail for login to your account:\n");
    gets(email);

    printf("Enter your password for login to your account:\n");
    gets(pass);

    if (strcmp(email, mail) == 0 && strcmp(pass, pswd) == 0) {
        printf("You have logged in successfully.\n");
    } else {
        printf("There is something wrong...please check and correct your E-mail or password.\n");
    }


}

