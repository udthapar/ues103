#include <stdio.h>
int main(){
	int a=10;
	float b=6.19;
	long int c = 12;
	double d = 4.13;
	char e='u';
	printf("the size of int is%d\nthe size of floatis%d\nthe size of long int is %d\nthe size of double is %d\nthe size of char is %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
	return 0;
}
