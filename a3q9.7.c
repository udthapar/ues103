// HCF of two numbers
#include <stdio.h>
int main (){
	int numb1,numb2,hcf;
	printf("enter the 2 numbers\n");
	scanf("%d%d",&numb1,&numb2);
	for (int i=1;i<=numb1&&i<numb2;i++){
		if (numb1%i==0&&numb2%i==0){
			hcf = i;
		}
	}
	printf("hcf is %d",hcf);
return 0;
}
