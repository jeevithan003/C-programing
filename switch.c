#include<stdio.h>
int main(){
    int goal;
    printf("enter the team goals\n");
    scanf("%d",&goal);
    switch (goal)
    {
    case 1:
    printf("1st block\n");
        break;
    case 2:
    printf("2st block\n");
        break;
        case 3:
    printf("3st block\n");
        break;
        case 4:
    printf("4st block\n");
        break;
        case 5:
    printf("5st block\n");
        break;
    default:
    printf("in valid \n");
    printf("re enter the correct goals\n");
        break;
    }
}
