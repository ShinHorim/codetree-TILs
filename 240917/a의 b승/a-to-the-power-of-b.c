#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,s = 1;
    scanf("%d %d", &a,&b);

    for(int i = 1; i<= b; i++){
        s = s *a;
    }
    printf("%d", s);
    return 0;
}