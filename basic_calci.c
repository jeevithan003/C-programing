#include<stdio.h>
int main(){
    //basic calculator programe in c
     
    double a;
    double b;
    char op;
    printf("enter the opertor\n");
    scanf("%c",&op);
    printf("enter the num1\n");
    scanf("%lf",&a);
   
    printf("enter the num2\n");
    scanf("%lf",&b);
    if(op=='+'){
        double result=a+b;
        printf("%lf", result);
    }
    if(op=='-'){
        double result=a-b;
        printf("%lf", result);
    }
    if(op=='*'){
        double result=a*b;
        printf("%lf", result);
    }
    if(op=='/'){
        double result=a/b;
        printf("%lf", result);
    }
}
