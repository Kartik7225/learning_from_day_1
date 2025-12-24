#include <stdio.h>
void findMaxNumAndIndex(int arr[], int n){  // ← Function with array param!
    for(int i=0; i<n-1; i++){              // Outer loop
        int index=i;
        for(int j=i+1; j<n; j++){          // Inner loop finds max
            if(arr[j]>arr[index]){
                index=j;                   // Track max index
            }
        }
        // Swap max to position i
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }
}

int main() {
    int arr[]={10,30,20,40,50};
    int a= sizeof(arr)/sizeof(arr[0]);     // Array size calc ✓
    
    printf("%d\n",a);                      // Fix: single printf
    
    // Print original
    for(int i=0; i<a; i++){
        printf("%d ",arr[i]);             
    }
    printf("\n");
    
    findMaxNumAndIndex(arr, a);            // Sort it!
    
    // Print sorted
    printf("Sorted: ");
    for(int i=0; i<a; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
