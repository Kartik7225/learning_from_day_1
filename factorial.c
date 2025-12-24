#include <stdio.h>
int main() {
    while(1){  // Infinite menu loop ✓
        int num, temp=1;
        printf("\nEnter number for factorial or -1 to exit: ");
        scanf("%d", &num);
        
        if(num < -1) {
            printf("Undefined!\n");
        }
        else if(num == -1) {
            break;  // Clean exit ✓
        }
        else {
            for(int i=num; i>1; i--) {  // Fix: i>1 not i>=0
                temp *= i;
            }
            printf("Factorial of %d = %ld\n", num, temp);
        }
    }
    return 0;
}
