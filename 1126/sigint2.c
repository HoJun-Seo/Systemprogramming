#include<stdio.h>
#include<signal.h>
#include<unistd.h>
struct sigaction newact;
struct sigaction oldact;
void sigint_handler(int signo);

int main(void)
{
        newact.sa_handler = sigint_handler;
        sigfillset(&newact.sa_mask);

        sigaction(SIGINT, &newact, &oldact);
        while(1)
        {
                printf("Ctrl-c button cleck!\n");
                sleep(1);
        }
}

void sigint_handler(int signo)
{
        printf("%d number signal process!\n", signo);
        printf(" if you button cleck again, process is end\n");
        sigaction(SIGINT, &oldact, NULL);
}
