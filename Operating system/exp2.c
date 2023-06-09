#include<stdio.h>

int main(){
int p;
printf("Enter the number of processes : ");
scanf("%d",&p);
for(int i = 1 ; i <= p ;i++){
    int delT  , To  , T1 , TAT , WT ;
    printf("\n Process ID number : %d" , i);
    printf("\n \n Enter the Arrival Time (To) and Burst Time (delT) : ");
    scanf("%d %d" , &To , &delT);
    T1 = T1 + delT ;
    TAT = T1 - To ;
    WT = TAT - delT ;
    printf(" \n Finish Time : %d  ,  Turn Around Time : %d  , Waiting Time : %d  "  , T1 , TAT , WT);

}

return 0;
}