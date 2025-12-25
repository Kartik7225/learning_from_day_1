#include <stdio.h>
// mathlib.h
//  #ifndef MATHLIB_H        // prevent double
//  #define MATHLIB_H

// long int factorial(long int num);  // ← DECLARATION only
// float add(float a, float b);
// float sub(float a, float b);
// float devide(float a, float b);
// float multiply(float a, float b);
// #endif
// #include "mathlib.h"

long int factorial(long int num){
    if (num < 1) return 1;
    return num * factorial(num-1);
}
float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float multiply(float a, float b){
    return a*b;
}
float devide(float a, float b){
    return a/b;
}
int main() {
    float num1, num2;
    long int numf;
    char operat;
    printf("\nwhat you want to do (+, -, x, /, !==factorial):\n");
    scanf("%c", &operat);
    if (operat=='!'){
        printf("Enter the number for factorial:\n");
        scanf("%ld", &numf);
        long int fact= factorial(numf);
        printf("factorial of %ld is %ld", numf, fact);
    }
    else if(operat=='+'){
        printf("\nEnter the numbers for additon:\n");
    scanf("%f",&num1);
    scanf("\n%f",&num2);
    printf("\nThe addition of %f and %f is:\n%f",num1, num2, add(num1,num2));
    }
    else if(operat=='-'){
        printf("\nEnter the numbers for subtraction:\n");
    scanf("%f",&num1);
    scanf("\n%f",&num2);
    
    printf("\nThe subtraction of %f and %f is:\n%f",num1, num2, sub(num1,num2));
    }
    else if(operat=='*'){
        printf("\nEnter the numbers for multiplication:\n");
    scanf("%f",&num1);
    scanf("\n%f",&num2);
    printf("\nThe multiplication of %f and %f is:\n%f",num1, num2, multiply(num1,num2));
    }
    else if(operat=='/'){
        printf("\nEnter the numbers for division:\n");
    scanf("%f",&num1);
    scanf("\n%f",&num2);
    printf("\nThe division of %f and %f is:\n%f",num1, num2, devide(num1,num2));
    }
    else{
        printf("undefined/wrong entries\n");
    }

    return 0;
}
