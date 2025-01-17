//*WAP for simple interest.
#include <stdio.h>
int main(){
	printf("WAP for simple interest.\n");
	double p,r,t;
	printf("please enter the principle\n");
	scanf("%lf",&p);
	printf("please enter the rate\n");
	scanf("%lf",&r);
	printf("please enter the time\n");
	scanf("%lf",&t);
	printf("simple interest is %lf\n",(p*r*t)/100);
	return 0;
}
