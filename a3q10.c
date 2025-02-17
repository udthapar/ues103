// Write a program to read in numbers until the number -999 is encountered. The sum of all numbers read until this point should be printed out.
#include <stdio.h>
int main (){
	long long int sum ;
	int num;
	while (1){
	printf("\nenter the number : ");
	scanf("%d",&num);
	if (num == -999){
		break;
	}
	sum += num;
	}
	printf("the sum is %lld\n",sum);
return 0;
}
