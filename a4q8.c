// Find largest and smallest in array
#include <stdio.h>
int main (){
	printf("please enter the number of elements in array\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("please enter the elements of array\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for (int i=1;i<n;i++){
		if (max<arr[i]){
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("maximum in the array is %d\nminimum in the array is %d\n",max,min);
return 0;
}
