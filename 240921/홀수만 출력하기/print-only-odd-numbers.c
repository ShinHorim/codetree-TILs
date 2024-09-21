#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);

   

    for (int i = 1; i<= a; i++){
        scanf("%d",&a);
        if (a%2 != 0 && a%3==0){
            printf("%d\n",a);
        }
    }
    return 0;
}