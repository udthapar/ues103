// For any character entered through keyboard check whether the entered character is capital letter, small letter, a digit or special symbol
#include <stdio.h>
int main (){
	printf("please enter the character\n");
	char c;
	scanf("%c",&c);
	if (c>='a'&& c<='z'){
		printf("entered character is small letter\n");
	}
	else if (c >='A'&& c<='Z'){
		printf("entered character is capital letter\n");
	}
	else if (c>='0' && c<='9'){printf("entered character is a number\n");}
	else {printf("entered character is a special character\n");}
return 0;
}
