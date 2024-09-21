#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int hap = 0;
    float h = 0;
    float av = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++){
        if (i%5==0 || i%7==0){
            hap += i;
            h += 1;
        }
    }
    av = hap/h;
    printf("%d %.1f", hap, av);
    return 0;
}