#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    int yun = 0;
    for (int i = 1; i<=a; i++){
        if (i%100==0 && i%400 != 0){
            continue;
        }
        else if (i%4==0){
            yun += 1;
        }

    }
    printf("%d", yun);
    return 0;
}