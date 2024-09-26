#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,sum=0;
    scanf("%d",&a);

    for(int i = 1; i<=a; i++){
        if (i%2==0 || i%3==0|| i%5==0){
            continue;
        }
        else{
            sum += 1;
        }
    }
    printf("%d",sum);

    return 0;
}