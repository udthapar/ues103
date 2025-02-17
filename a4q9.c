// Union and intersection of elements of two arrays
#include <stdio.h>
int main (){
   printf("Enter the size of the array 1: ");
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
  //  int freq[100]={0};
    printf("Enter the elements of the array 1: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
 //   	freq[arr1[i]]++;
    }
 printf("Enter the size of the array 2: ");
    int n2;
    scanf("%d", &n2);
    int arr2[n2];    
    printf("Enter the elements of the array 2: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
//	freq[arr2[i]]++;
    }
// union 
int arr_union[n1+n2];
int k=0;
for (int i=0;i<n1;i++){
		arr_union[k++]=arr1[i];
}
 for (int i = 0; i < n2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr_union[k++] = arr2[i];
        }
    }

printf("unioned array would be : ");
for (int i=0;i<k;i++){
	printf("%d ",arr_union[i]);
}
// intersected 
int arr_intersected[n1+n2];
int q;
for (int i=0;i<n1;i++){
	for (int j=0;j<n2;j++){
		if (arr2[j]==arr1[i])
		arr_intersected[q++]=arr1[i];
	}	
}
printf("intersected array would be : ");
for (int i=0;i<q;i++){
	printf("%d ",arr_intersected[i]);
}
return 0;
}
