#include <stdio.h>

int main(){
    int p[20],pri[20],bt[20],wt[20],tat[20],i,j,temp,n;
    float avg_wt=0, avg_tat=0;

    printf("Enter the number of processes: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        p[i] = i+1;
        printf("Enter Brust Time & Priority for Process %d: ",p[i]);
        scanf("%d %d",&bt[i],&pri[i]);
    }

    //Sort based on priority (ascending order)
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(pri[i] > pri[j]){
                temp = pri[i];
                pri[i] = pri[j];
                pri[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    wt[0] = 0;
    tat[0] = bt[0];
    avg_tat = tat[0];
    avg_wt = wt[0]; //no need, for the sake of good pracitce

    for(i=1; i<n; i++){
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = wt[i] + bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("\nProcess\tPriority\tBrust Time\tWaiting Time\tTurnaround Time\n");
    for(i=0; i<n; i++){
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n",p[i],pri[i],bt[i],wt[i],tat[i]);
    }
    printf("\nAverage Waiting Time: %f", avg_wt/n);
    printf("\nAverage Turnaround Time: %f", avg_tat/n);

    return 0;
}