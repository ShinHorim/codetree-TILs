#include <stdio.h>

int main() {
    int a,b[1000];
    scanf("%d",&a);

    int c = a;
    int i = 0;
    while(i<2){
        
        if (c%5==0){
            i++;
        }
        printf("%d ", c);
        c = c+a;
    }
    return 0;
}