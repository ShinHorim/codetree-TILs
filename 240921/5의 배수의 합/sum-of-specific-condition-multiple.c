#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    int max,mini,be=0;
    scanf("%d %d",&a, &b);
    max = a>b ? a:mini;
    for(int i = mini; i<= max; i++){
        if (i%5==0){
            be += i;
        }
    }
    printf("%d", be);
    return 0;
}