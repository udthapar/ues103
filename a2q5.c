// Assignment operator assigns right hand side value to left hand side variable.
#include <stdio.h>
int main(){
	int a,b;
	printf("please enter value 1 and 2\n");
	scanf("%d%d",&a,&b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("swapped a and b is %d %d ",a,b);
	return 0;
}
