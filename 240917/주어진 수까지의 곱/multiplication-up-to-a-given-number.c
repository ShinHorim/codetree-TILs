#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,gop = 1;
    scanf("%d %d",&a,&b);

    for (int i = a; i<=b; i++){
        gop *=i;
    }
    printf("%d",gop);
    return 0;
}