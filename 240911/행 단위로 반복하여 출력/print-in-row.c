#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);

    for (int i = 1; i<=a; i++){
        for (int j = 1; j <= a; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}