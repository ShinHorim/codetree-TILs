#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    int b;
    scanf("%c %d", &a, &b);

    if (a =='A'){
        for(int i = 1; i<=b; i++){
            printf("%d ",i);
        }
    }
    else if (a=='D'){
        for(int j = b; 1<=b; j--){
            printf("%d ",j);
        }
        
    }
    
    return 0;
}