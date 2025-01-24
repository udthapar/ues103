//WAP to implement assignment operators such as += , -= , *=, /= %= etc.
#include <stdio.h>
int main (){
	printf("please enter the values for this operations\n");
	double a;
	scanf("%lf",&a);
	printf("+= with 10  is %lf\n",a+=10);
	printf("-= with 10  is %lf\n",a-=20);
	printf("*= with 10  is %lf\n",a*=10);
	printf("/= with 10  is %lf\n",a/=10);
//	printf("%= with 10  is %d\n", a %=2);
	return 0;
}
