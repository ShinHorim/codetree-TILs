#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int il=0;
    int ship = 0;
    scanf("%d",&a);
    il = a%10;
    ship = a/10;
    for (int i = 1; i<= a; i++){
        
        if (i%3==0){
            printf("%d", i);
        }
        else if (i%3==0 ||ship==3|| ship==6|| ship==9){
            printf("0 ");
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}