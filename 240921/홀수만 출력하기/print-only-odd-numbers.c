#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    int b;
   

    for (int i = 1; i<= a; i++){
        scanf("%d",&b);
        if (b%2 != 0 && b%3==0){
            printf("%d\n",b);
        }
    }
    return 0;
}