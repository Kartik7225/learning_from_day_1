#include <stdio.h>
int main() {
    int a=10;
    int b=20;
    int *c = &a;
   // int d = &c;  gives error understood!
   // c=&a;  works well
    printf("%d\n",*c); //dereference value
    printf("My third 'C' Programme...\nThanks...\n");

    return 0;
}
