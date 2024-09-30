#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    float a;
    int cnt = 0;
    float sum = 0;
    float av = 0;
    for (int i = 1; i<= 10; i++){
        scanf("%f", &a);
        if (0<=a && a<=200){
            sum += a;
            cnt++;
        }
    }
    av = sum/cnt;
    printf("%.f %.1f", sum, av);
    
    
    
    return 0;
}