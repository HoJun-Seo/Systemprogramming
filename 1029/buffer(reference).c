#include<stdio.h>
void main(){
	int i, j, n, m;
	char c;
	printf("반복하는 횟수 입력 : ");
	scanf("%d", &n);
	for(i = 1; i<=n; i++){
		printf("반복할 문자와 반복할 수 입력 : ");
		{ fflush(stdin);(visual studio 일 경우)
		getchar();(gcc 환경일 경우)
		__fpurge(stdin);(gcc 환경일 경우)
		scanf(" %c %d", &c, &m);(또는 scanf 자료형에서 띄워쓰기 이후 작성을 해도 가능) }(버퍼에 개행문자를 지워준다.)
		for(j = 1; j <= m; j++){
			printf("%c", c);
		}
	}
}