#include <stdio.h>

int main() {
    // 변수 선언
    char c;
	int n;

	// 입력
	scanf("%c %d", &c, &n);
    
    // 출력
	if(c == 'A') {
		for(int i = 1; i <= n; i++)
			printf("%d ", i);
	}
	else {
		for(int i = n; i >= 1; i--)
			printf("%d ", i);
	}
	
    return 0;
}