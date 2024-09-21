#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int hol = 0;
    for (int i = 1; i<=10; i++){
        scanf("%d",&a);
        if (a%2 != 0){
            hol += 1;
        }
    }
    printf("%d", hol);

    return 0;
}