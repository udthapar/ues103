//To insert an element at a given location of an array
#include <stdio.h>
int main (){
	printf("enter the size of array\n");
	int n;
	scanf("%d",&n);
	int arr [n];
	printf("enter the elements of array\n");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be inserted : ");
	int el;
	scanf("%d",&el);
	printf("enter the place where it has to be inserted :");
	int pos;
	scanf("%d",&pos);
	pos--;
	for (int i=n;i>pos;i--){
		arr[i]=arr[i-1];
	}
	n++;
	arr[pos]=el;
	printf("new array is : ");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
return 0;
}
