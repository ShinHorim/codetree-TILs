#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    int a,b,c;
    scanf("%d",&a);

    for (int i = 1; i<= a; i++){
        scanf("%d",&b);
        if (b%2 != 0 && b%3 == 0){
            sum += b;
        }
    }
    printf("%d",sum);
    
    return 0;
}