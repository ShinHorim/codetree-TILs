#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int sum = 0;
    scanf("%d", &a);
    for (int i = 1; i< a; i++){
        if (a%i==0){
            sum += i;
        }
    }
    if (sum == a){
        printf("P");
    }
    else{
        printf("N");
    }
    
    return 0;
}