#include<stdio.h>
#define MAXLINE 80
#include<stdlib.h>
int main(int argc, char *argv[])
{
	FILE *fp;
	int line = 0;
	char buffer[MAXLINE];

	if(argc != 2){
		fprintf(stderr, "사용법 : line 파일이름\n");
		exit(1);
	}

	if((fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "파일 열기 오류 line++\n");
		exit(2);
	}

	while(fgets(buffer, MAXLINE, fp) != NULL){
		line++;
		printf("%3d %s", line, buffer);
	}
	exit(0);
}
