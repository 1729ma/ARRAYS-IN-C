#include <stdio.h>

int main() {
  int n,i,j,a;
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

      for( i=0; i<n/2; i++){
          
             a=arr[i];
             arr[i]=arr[n-i-1];
             arr[n-i-1]=a;
              
          }
      
      printf("\nthe reverse of array is\n");
      for(i=0;i<n;i++){
           printf("%d ", arr[i]);
  
      }
     
 
  return 0;
}
