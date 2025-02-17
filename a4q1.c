// To reverse an array of int/float
#include <stdio.h>
int main (){
	printf("enter the size of array\n");
	int n;
	scanf("%d",&n);
	int arr1[n];int arr2[n];
	printf("now enter the elements\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}int j=n-1;
	for (int i=0;i<n;i++){
		arr2[i]=arr1[j];
		j--;
	}
	printf("the reversed array is : ");
	for (int i=0;i<n;i++){
		printf("%d ",arr2[i]);
	}
return 0;
}
