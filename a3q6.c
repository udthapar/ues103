// To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.
#include <stdio.h>
int main (){
	printf("enter the number : ");
	int num;
	scanf("%d",&num);
	if (num%5==0 && num%8==0){
		printf("number is divisible by 5 and 8\n");
	}
	if (num%5==0 && num%8!=0){
		printf("number is only divisible by 5\n");
	}
	if (num%5!=0 && num %8==0){
		printf("number is only divisible by 8\n");
	}

return 0;
}
