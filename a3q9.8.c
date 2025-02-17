// lcm of 2 numbers
#include <stdio.h>
int main (){
	int num1,num2,lcm=1;
	printf("please enter the 2 numbers\n");
	scanf("%d%d",&num1,&num2);
	int max = num1;
	if (num1<num2) {max =num2;}
	for (int i=max;i<=(num1*num2);i++){
		if (i%num1==0 && i%num2==0){
			lcm = i;
			break;
		}
	}
	printf("the value of lcm is %d",lcm);
return 0;
}
