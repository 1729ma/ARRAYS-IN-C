#include <stdio.h>

int main() {
  int n,i,j,min,smin,max,smax;
   printf("enter number of elements of array\n");
  scanf("%d", &n);
  int arr[n];
  int b[n];
 
  printf("enter the elements\n");
  for(int i=0; i<n; i++){
      scanf("%d", &arr[i]);
  }
  printf("array elements are\n");
  for(int i=0; i<n; i++){
      printf("%d ", arr[i]);
  }
  min=arr[0];
  max=arr[0];
  for(i=0; i<n; i++){
      if(arr[i]<min){
          smin=min;
          min=arr[i];
      }
      else{
          if(arr[i]<smin && arr[i]!=min){
              smin=arr[i];
              
          }
      }
  }
printf("\nminimum of array is %d\n", min);
printf("\nsecond minimum of array is %d\n",smin);
for(i=0; i<n; i++){
    if(arr[i]>max){
        smax=max;
        max=arr[i];
    }
    else{
        if(arr[i]>smax && arr[i]!=max){
            smax=arr[i];
        }
    }
}

 printf("\nmaximum of array is %d\n", max);
printf("\nsecond maximum of array is %d\n",smax);
  return 0;
}
