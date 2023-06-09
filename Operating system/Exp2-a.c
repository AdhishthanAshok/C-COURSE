// #include<stdio.h>
 
//  int main()
 
// {
//     int n , BT[20],WT[20],tat[20],AVGWT=0,AVGTAT=0,i,j;
//     printf("Enter total number of processes(maximum 20):");
//     scanf("%d",&n);
 
//     printf("nEnter Process Burst Timen");
//     for(i=0;i<n;i++)///
//     {
//         printf("P[%d]:",i+1);
//         scanf("%d",&BT[i]);
//     }
 
//     WT[0]=0;   
 
//     for(i=1;i<n;i++)
//     {
//         WT[i]=0;
//         for(j=0;j<i;j++)
//             WT[i]+=BT[j];
//     }
 
//     printf("\n Process \t Burst Time \t Waiting Time \t Turnaround Time");
 
//     for(i=0;i<n;i++)
//     {
//         tat[i]=BT[i]+WT[i];
//         AVGWT+=WT[i];
//         AVGTAT+=tat[i];
//         printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,BT[i],WT[i],tat[i]);
//     }
 
//     AVGWT/t=i;
//     AVGTAT/t=i;
//     printf("\n\nAverage Waiting Time:%d",AVGWT);
//     printf("\n\nAverage Turnaround Time:%d",AVGTAT);
 
//     return 0;
// }

#include <stdio.h> 
struct Process {  int pid,at,bt; 
int tat,wt;  }; 
void b_Sort_at (struct Process prc[20], int s) 
{  int i, j; 
struct Process temp; 
for (i = 0; i < s - 1; i++) 
{   for (j = 0; j < (s - 1-i); j++) 
{  if (prc[j].at > prc[j + 1].at) 
{  temp = prc[j]; 
prc[j] = prc[j + 1]; 
prc[j + 1] = temp; 
} } 
 } } 
void gantt_chart (struct Process prc[20], int s){ 
int i; 
double tat_sum=0,wt_sum=0; 
printf("Process_id Arr_Time Burst_Time  WT   TAT\n"); 
for(i=0;i<s;i++){ 
printf(" %d           %d       %d          %d     %d\n",prc[i].pid,prc[i].at,prc[i].bt,prc[i].wt,prc[i].tat); 
tat_sum+=prc[i].tat; 
wt_sum+=prc[i].wt;   
} 
printf("\nTAT avg is: %f",tat_sum/s);  
printf("\nWT avg is: %f",wt_sum/s); 
} 
int main() 
{ 
struct Process pcs[20]; 
int n; 
printf("Enter the number of process : "); 
scanf("%d",&n); 
int i; 
printf("Enter each process data: \n"); 
printf("Process ID , Arrival Time , Burst Time : \n"); 
for(i=0;i<n;i++){ 
scanf("%d",&pcs[i].pid); 
scanf("%d",&pcs[i].at); 
scanf("%d",&pcs[i].bt); 
} 
b_Sort_at(pcs , n); 
int startprocess=pcs[0].at; // to handle Waiting time of process 
int endprocess=0; // to handle turn around time 
for(i=0;i<n;i++){ 
pcs[i].wt=startprocess - pcs[i].at; 
startprocess += pcs[i].bt; 
endprocess += pcs[i].bt; 
pcs[i].tat= endprocess - pcs[i].at; 
} 
gantt_chart(pcs,n); 
printf("\n"); 
printf("Gantt Diagram is: \n\n"); 
int ct=pcs[0].at; 
int temp; 
for(i=0;i<n;i++){ 
printf("%d(P%d)",ct,i+1); 
temp=ct; 
ct+=pcs[i].bt; 
for(int j=0;j<ct-temp;j++) printf(" "); 
}
printf("%d(end)",ct);
return 0;
}
