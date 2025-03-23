#include <stdio.h>
#define n 100
int main() {
    int arr[n],cb=0,ca=0,i,isbelow,sum=0;//ca=count above,cb=count below
    float avg;
    int arr2[n],arr3[n];
    printf("\nenter the elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=sum/100.0;
    printf("\nthe average is %f", avg );
    
    for(i=0;i<n;i++){
        isbelow=0;
        if(arr[i]<avg){
            isbelow=1;
        }
    
    if(!isbelow){
        arr3[ca]=arr[i];
        ca++;
    }
    else{
        arr2[cb]=arr[i];
        cb++;
    }
    }
    printf("\nthe above elements are\n");
   for(i=0;i<ca;i++){
        printf("%d ", arr3[i]);
   }
   printf("\nthe below elements are\n");
   for(i=0;i<cb;i++){
        printf("%d ", arr2[i]);
   }
    return 0;
}
