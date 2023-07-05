// program to convert minutes into hours and minutes
#include <stdio.h>

void displayTime(int minutes)
{
    int hours=minutes/60;
    int remainingMinutes=minutes % 60;

    printf("Time..:%d hours %d minutes\n",hours,remainingMinutes);
}

 int main()
 {   int totalMinutes;

     printf("enter the total minutes...:");
     scanf("%d",&totalMinutes);

     displayTime(totalMinutes);
 }
