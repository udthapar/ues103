//WAP to practice math functions such as sin(), cos(), log(), pow(), sqrt() etc.
#include <stdio.h>
#include <math.h>
int main(){
	printf("enter the theta\n");
	double theta ;
	scanf("%lf",&theta);
	double cos1 =cos(theta);
	double sin1 =sin(theta);
	printf("sin is %lf\n",sin1);
	printf("cos is %lf\n",cos1);
printf("enter the value for log\n");
double lognum;
scanf("%lf",&lognum);
printf("logarthmic is %lf\n",log(lognum));	
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
