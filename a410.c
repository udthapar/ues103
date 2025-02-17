// Remove duplicates in an array
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
// sort 
int temp;
for (int i=0;i<n1;i++){
	for (int j=i+1;j<n1;j++){
		if (arr[i]>arr[j]){
			temp = arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}	
	}
}
// 2 pointer
int q=0;
for (int i=1;i<n1;i++){
	if (arr[i]!=arr[q]){
	q++;
	arr[q]=arr[i];
	}
}
printf("new array is \n");
for (int i=0;i<=q;i++){
	printf("%d ",arr[i]);
}
return 0;
}
