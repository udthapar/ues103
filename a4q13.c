// rotate leftwise
#include <stdio.h>
int main (){
   printf("Enter the size of the array 1: ");
    int n1;
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter the elements of the array 1: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }
	printf("enter the number of times you wanna rotate it leftwise\n");
	int r;
	scanf("%d",&r);
	for (int i=0;i<r;i++){
		int temp = arr[0];
		for (int j=0;j<n1;j++){
		arr[j]=arr[j+1];
		}
		arr[n1-1]=temp;
	}
	printf("rotated array is \n");
	for (int i=0;i<n1;i++){
		printf("%d ",arr[i]);
	}
return 0;
}
