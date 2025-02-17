// To find greatest of 3 integers 
#include <stdio.h>
int main (){
	int num1,num2,num3;
	printf("please enter the 3 numbers respectivelly\n");
	scanf("%d%d%d",&num1,&num2,&num3);
    // Checking for greatest number
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the greatest integer\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the greatest integer\n", num2);
    } 
    else {
        printf("%d is the greatest integer\n", num3);
    }

    // Checking if all numbers are equal
    if (num1 == num2 && num2 == num3) {
        printf("All numbers are equal.\n");
    }
return 0;
}
