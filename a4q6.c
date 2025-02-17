// Sum and average of array elements
#include <stdio.h>
int main (){
    printf("Enter the size of the array: ");
    int n,sum=0;
    scanf("%d", &n);
    int arr[n];    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	for (int i=0 ;i<n;i++){
	sum+=arr[i];	
	}
	double average = (double)sum/n;
	printf("the sum is %d\nthe average is %lf\n",sum,average);
return 0;
}
