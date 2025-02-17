// Delete a given element in an array
#include <stdio.h>
int main () {
	printf("enter the size of array\n");
	int n;
	scanf("%d",&n);
	int arr [n];
	printf("enter the elements of array\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be deleted\n");
	int el,pos=-1;
	scanf ("%d",&el);
	for (int i=0;i<n;i++){
		if (arr[i]==el){
			pos=i;	
		}
	}
	if (pos==-1){
		printf("number not in the array\n");
	}
	else {
		for (int i=pos;i<n;i++){
			arr[i]=arr[i+1];
		}
		n--;
	}
	printf("the array is : ");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
return 0;

}
