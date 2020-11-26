#include<stdio.h>
int main() {

int n, bt[20],wt[20],tat[20],avwt=0, avtat=0,i,j;
 printf("Enter total number of processes(maximum 20) : ");
scanf("%d", &n);
printf("\nEnter Process BT\n");
for(i=0;i<n;i++)
{
printf("P[%d]:",i+1);
scanf("%d",&bt[i]);
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
wt[1]+=bt[i];
}
printf("\n Process \t Burst Time \t Waiting Time \t Turnaround Time");
for(i=0;i<n;i++)
{ 
tat[i]=bt[i]+wt[i];
avwt+=wt[i];
avtat+=tat[i];
printf("\n nP[%d]\t\t\t%d\t\t%d\t\t%d",i+1, bt[i],wt[i],tat[i]);
}
avwt/=i;
avtat/=i;
printf("\n Average Waiting Time:%d",avwt);
printf("\n Average Turnaround Time: %d",avtat);
return 0;
}
