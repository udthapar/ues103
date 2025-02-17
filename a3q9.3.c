// X raised to power n
#include <stdio.h>
int main (){
	printf("enter the number : ");
	int num,pow,answer=1;
	scanf("%d",&num);
	printf("enter the pow : ");
	scanf("%d",&pow);
	for (int i=0;i<pow;i++){
	answer*=num;
	}
	printf("answer is %d",answer);
return 0;
}
