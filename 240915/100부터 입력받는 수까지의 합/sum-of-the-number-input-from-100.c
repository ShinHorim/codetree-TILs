#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b = 0;
    scanf("%d", &a);

    for(int i = a; i<= 100; i++){
        b += i;
    }
    printf("%d", b);
    return 0;
}