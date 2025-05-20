#include <stdio.h>

int main(){
    int bt[20], wt[20], tat[20], i, n;
    float avg_wt = 0, avg_tat = 0;

    printf("Enter the number of process: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter the brust time for the process %d: ",i);
        scanf("%d", &bt[i]);
    }

    //----------------------//
    wt[0] = 0;
    tat[0] = bt[0];
    avg_tat = tat[0];

    for(i=1; i<n; i++){
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = wt[i] + bt[i];

        avg_wt += wt[i];
        avg_tat += tat[i];
    }
    //----------------------//

    printf("\nProcess\tBrust time\tWaiting Time\tTurn Around Time\n");
    for (i=0; i<n; i++){
        printf("P%d\t%d\t\t%d\t\t%d\n",i,bt[i],wt[i],tat[i]);
    }
    printf("\nAverage waiting time: %f", avg_wt / n);
    printf("\nAverage turn around time: %f", avg_tat / n);

    return 0;
}