#include <stdio.h>

int main() {
  int n,max,min;
   printf("enter number of elements of array\n");
  scanf("%d", &n);
  int arr[n];
 
  printf("enter the elements\n");
  for(int i=0; i<n; i++){
      scanf("%d", &arr[i]);
  }
  printf("array elements are\n");
  for(int i=0; i<n; i++){
      printf("%d ", arr[i]);
  }
  max=arr[0];
  min=arr[0];
  for(int i=0;i<n;i++){
      if (arr[i]>max){
          max=arr[i];
      }
  }
  printf("\nthe max element is : %d", max);
  for(int i=0;i<n;i++){
      if(arr[i]<min){
          min=arr[i];
      }
  }
  printf("\nthe min element is : %d", min);
  return 0;
}
