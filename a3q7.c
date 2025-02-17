// A library charges a fine for every book returned late. For the first 5 days the fine is 50paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you returnthe book after 30 days your membership will be canceled. WAP to accept no. of days the member is late to return the book and display the fine or appropriate message
#include <stdio.h>
int main (){
	printf("please enter the number of days of returning: ");
	int days=0;
	scanf("%d",&days);
	if (days <= 5 ){
		printf("your fine is 50 paisa\n");
	}
	else if (days > 5 && days <= 10 ) {printf("your fine is 1 rupee\n");}
	else if (days > 10 && days <= 30 ) {printf("your fine is 5 rupee\n");}
	else  (days > 30 ) {printf("membership cancelled\n");}
return 0;
}
