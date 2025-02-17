// Whether no. is prime or not
#include <stdio.h>
#include <math.h>
int main () {
	printf("please enter the number : ");
	int numb;
	scanf("%d",&numb);
	int prime =0;
	for (int i=2;i<sqrt(numb);i++){
		if (numb%i==0){
			prime=1;
			break;
		}
	}
	if (prime==1){	printf("the number is not a prime number\n");}
	else {printf("the number is a prime number\n");}
return 0;
}
