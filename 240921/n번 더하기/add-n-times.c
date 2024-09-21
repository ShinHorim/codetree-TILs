#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int sum=0;
    scanf("%d %d",&a, &b);
    c = a+b;

    for(int i = 1; i<=b; i++){
        printf("%d\n", c);
        c += b;
    }

    return 0;
}