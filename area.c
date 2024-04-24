#include<stdio.h>
#include<math.h>
int main(){
    //c program to find area of the triangle
    double length;
    double breath;
    printf("enter the length\n");
    scanf("%lf",&length);
    printf("enter the breath \n");
    scanf("%lf",&breath);
    double area=((length*breath)/2);
    printf("the area of the triangle is %lf",area);


    return 0;
}
