// Merge two arrays
#include <stdio.h>
int main (){
   printf("Enter the size of the array 1: ");
    int n1;
    scanf("%d", &n1);
    int arr1[n1];    
    printf("Enter the elements of the array 2: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }
 printf("Enter the size of the array 2: ");
    int n2;
    scanf("%d", &n2);
    int arr2[n2];    
    printf("Enter the elements of the array 2: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr[i]);
    }
int arr3 [n1+n2];
int k=0;
for (int i=0;i<n1;i++){
	arr3[k]=arr1[i];
	k++;
}
for (int i=0;i<n2;i++){
	arr3[k]=arr2[i];
	k++;
}
printf("merged array is : ");
	for (int i=0;i<n1+n2;i++){
		printf("%d ",arr3[i]);
	}
return 0;
}
