#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
        int pid, child, status;
        printf("[%d] parent process start \n", getpid());
        pid = fork();

        if(pid == 0){
                printf("[%d] Child process start \n", getpid());
                exit(1);
        }

        child = wait(&status);
//      printf("[%d] Child process %d end \n", getpid.
        printf("[%d] Child process %d end \n", getpid(), child);
        printf("\t end code %d\n", status>>8);
}
