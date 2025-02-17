// Read in 20 integers and count the even numbers
#include <stdio.h>
int main (){
	int num;
	int i=0,count=0;
	while (i<20){
	printf("enter the number : ");
	scanf("%d",&num);
	if (num%2==0){count++;}
	i++;
	}
	printf("number of even numbers are %d",count);
return 0;
}
