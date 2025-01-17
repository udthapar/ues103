//WAP to find the Nth root of a number.
#include <stdio.h>
#include <math.h>
int main (){
double n,result;
int r;
printf("enter the number\n");
scanf("%lf",&n);
printf("enter the nth root\n");
scanf("%d",&r);
result = pow(n,1/r);
printf("%d root of %lf is %lf\n",r,n,result);
	return 0;
}
