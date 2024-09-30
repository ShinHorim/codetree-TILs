#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum=0;
    scanf("%d",&a);
    float av;

    for (int i = 1; i<= a; i++){
        scanf("%d", &b);
        sum += b;
    }
    av = (float)sum/a;
    printf("%d %.1f", sum , av);
    return 0;
}