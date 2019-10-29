#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
        int i,j;
        char c;

        printf("loop number input : ");
        scanf("%d", &i);

        while(i != 0 ){
                printf("character and number input : ");
                if(scanf(" %c %d", &c, &j) == 2){
                        printf("\n");
                        printf("You input %c and %d : ", c, j );
                        while(j != 0 ){
                                printf("%c", c);
                                j--;
                        }
                printf("\n");
                i--;
                }else printf("Wrong input\n");
        }

        return 0;
        exit(0);
}