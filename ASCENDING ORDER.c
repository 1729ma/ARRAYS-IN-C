#include <stdio.h>

int main() {
  int n,a;
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
  for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
          if(arr[i]>arr[j]){
              a=arr[i];
              arr[i]=arr[j];
              arr[j]=a;
          }
      }
  }
  printf("\nthe elements in ascending order\n");
  for(int i=0; i<n; i++){
      printf("%d ", arr[i]);
  }
  
    return 0;
}
