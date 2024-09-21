#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int hol3 = 0;
    int hol5 = 0;
    for (int i = 1; i<=10; i++){
        scanf("%d",&a);
        if (a%3 == 0){
            hol3 += 1;
        }
        if (a%5 == 0){
            hol5 += 1;
        }
    }
    printf("%d %d", hol3, hol5);

    return 0;
}