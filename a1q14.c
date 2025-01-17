#include <stdio.h>
#include <math.h>
int main(){
	double principle ,rate;
	int t,ty;
	printf("enter the amount\n");
	scanf("%lf",&principle);
	printf("enter the rate\n");
	scanf("%lf",&rate);
	printf("enter the time\n");
	scanf("%d",&t);
	double interest = principle*pow(1+rate/100,t);
	printf("compound interest is %lf",interest);
	return 0;
}
