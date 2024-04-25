#include<stdio.h>
#include<math.h>
int main(){
    //if else program in c
    int goal;
   printf("enter the team goal !\n");
   scanf("%d",&goal);
   if (goal==1){
    printf("team will lose\n");
   }
   else if (goal==2)
   {
    printf("20 percentage chances to win\n");
   }
   else if (goal==3){
    printf("no one can beat this team even god also\n");
   }
   else if (goal>=4)
   {
    printf("penatly shootout can save the teams\n");
   }
   
   
   

    return 0;
};
