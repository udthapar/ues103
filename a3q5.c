//To check whether number is: (a) even or odd (b) negative or positive by using (i) if-else
#include <stdio.h>
int main (){
	int num;
	printf("enter the number : " );
	scanf("%d",&num);
	if (num >0 && num%2==0){
		printf("its a positive even number\n");
	}
	if (num >0 && num%2!=0){
		printf("its a positive odd number\n");
	}
	if (num <0 && num%2==0){
		printf("its a negative even number\n");
	}
	if (num <0 && num%2!=0){
		printf("its a negative odd number\n");
	}
	if (num==0){
		printf("its zero\n");
	}
return 0;
}
