#include<stdio.h>
int main()
{
  int i,n,bt[10],at[10],tat[10],wt[10],complt=0;
  float avgtat=0,avgwt=0,totaltat=0,totalwt=0;
  printf("enter the no. of processes:\t");
  scanf("%d",&n);
  printf("enter burst time");
  for(i=0;i<n;i++)
    {printf("Burst time of process-%d:\t",i+1);
      scanf("%d", &bt[i]);
      printf("\n");
    }
  //set arrival time to zero for all process
  for(i=0;i<n;i++)
    at[i]=0;
  //caalculate TAT
  for(i=0;i<n;i++)
    {
      complt=complt+bt[i];
      tat[i]=complt-at[i];
      totaltat=totaltat+tat[i];
    }
  avgtat=(float)totaltat/n;
  
  // calculate wait time
  for(i=0;i<n;i++)
    {
      wt[i]=tat[i]-bt[i];
      totalwt=totalwt+wt[i];
    }
  avgwt=(float)totalwt/n;

  printf("ProcessNo  Burst_time  Wait_time  Turnaround_time\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t\t\t",i+1);
      printf("%d\t\t\t",bt[i]);
      printf("%d\t\t\t",wt[i]);
      printf("%d\t\t\t",tat[i]);
      printf("\n");
      printf("\n");
    }
  printf("Average wt and tat is %f and %f",avgwt,avgtat);
}
