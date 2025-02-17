// simple calculator using switch
#include <stdio.h>
int main (){
	printf("enter the two numbers : ");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("enter the operation : ");
	char op;
	scanf(" %c",&op);
	switch (op){
	case  '+':
		printf("\n%d",a+b);
		break;
	
	case '-': 
		printf("\n%d",a-b);
		break;
	case '*':
		printf("\n%d",a*b);
		break;
	case '/': 
		printf("\n%d",a/b);
		break;
	default : 
		printf("invalid operator input\n");
}
return 0;
}
