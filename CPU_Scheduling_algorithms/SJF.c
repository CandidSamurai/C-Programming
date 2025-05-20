#include <stdio.h>
int main(){
    int p[20],bt[20],wt[20],tat[20],i,j,temp,n;
    float avg_wt=0, avg_tat=0;
    
    printf("Enter the number of Processes: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        p[i]=i;
        printf("Enter the brust time for Process%d: ",i);
        scanf("%d",&bt[i]);
    }

    //short using bubble short
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(bt[i] > bt[j]){

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

    for(i=1; i<n; i++){
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = wt[i] + bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("\nProcess\tBrust Time\tWaiting Time\tTurnaround Time");
    for(i=0; i<n; i++){
        printf("\nP%d\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    printf("\nAverage waiting time: %f",avg_wt/n);
    printf("\nAverage turnaround time: %f",avg_tat/n);

    return 0;
}