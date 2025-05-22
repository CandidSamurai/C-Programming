#include <stdio.h>

int main() {
    int i, n, time, remain, time_quantum;
    int bt[10], rt[10], wt[10] = {0}, tat[10] = {0};
    float avg_wt = 0, avg_tat = 0;

    printf("Enter the total number of processes: ");
    scanf("%d", &n);
    remain = n;

    for (i = 0; i < n; i++) {
        printf("Enter Burst Time for Process P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];  // Remaining time = burst time initially
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &time_quantum);

    int t = 0;  // Current time

    while (remain != 0) {
        for (i = 0; i < n; i++) {
            if (rt[i] > 0) {
                if (rt[i] > time_quantum) {
                    t += time_quantum;
                    rt[i] -= time_quantum;
                } else {
                    t += rt[i];
                    wt[i] = t - bt[i];
                    rt[i] = 0;
                    remain--;
                }
            }
        }
    }

    // Calculate Turnaround Time and Averages
    for (i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %f", avg_wt / n);
    printf("\nAverage Turnaround Time = %f\n", avg_tat / n);

    return 0;
}
