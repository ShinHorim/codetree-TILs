#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int big, small;
    scanf("%d %d", &a, &b);

    big = a>b ? a:b;
    small = a<b ? a:b;
    for (int i = big; small<=big; big--){
        printf("%d ", big);
    }
    return 0;
}