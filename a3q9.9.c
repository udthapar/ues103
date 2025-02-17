// *Generate Fibonacci series
#include <stdio.h>
int main (){
	printf("enter the number till which fibonacci would be runned : ");
	int n;
	scanf("%d",&n);
	int a=0,b=1,c=0;
	for (int i=1;i<=n;i++){
		printf("%d ",c);
		a =b;
		b=c;
		c=a+b;
	}

return 0;
}
