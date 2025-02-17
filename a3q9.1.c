// *Factorial of number
#include <stdio.h>
int main (){
	printf("enter the number to find the factorial\n");
	int numb;
	scanf("%d",&numb);
	long long int factorial=1;
	for (int i=1;i<=numb;i++){
		factorial *= i;
	}
	printf("the factorial is %lld\n",factorial);
return 0;
}
