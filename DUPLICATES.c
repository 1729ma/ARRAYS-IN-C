#include <stdio.h>

int main() {
  int n,i,j,count=0,isduplicate,dup=0;
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

    for(i=0; i<n; i++){
        int isduplicate=0;
        for(j=0; j<i; j++){
            if(arr[i]==arr[j]){
                isduplicate=1;
                dup++;
            }
        }
    
    if(!isduplicate){
        b[count]=arr[i];
        count++;
    }
    
    }
    printf("after removing duplicates");
    for(i=0; i<count; i++){
        printf("%d ", b[i]);
    }
    
    printf("the number of duplicates are %d", dup);
  return 0;
}
