#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>
void alarmHandler();
int main()
{
        signal(SIGALRM, alarmHandler);
        alarm(5);
        printf("infinite loop\n");
        while(1){
                sleep(1);
                printf("1 second\n");
        }
        printf("Not processing\n");
}

void alarmHandler()
{
        printf("Wake up!!\n");
        exit(0);
}
