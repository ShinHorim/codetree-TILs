#include <stdio.h>

int main() {
    int a,b;
    int bea[100];
    int tmp;
    
    scanf("%d",&a);

    for(int i = 0; i<a; i++){
        scanf("%d",&bea[i]);
    }
    //오름차순
    for(int i = 0; i<a; i++){
        for(int j = 0; j<a-1; j++){
            if(bea[j]>bea[j+1]){
                tmp = bea[j];
                bea[j] = bea[j+1];
                bea[j+1] = tmp;
            }
        }
    }
    for(int i = 0; i<a; i++){
        printf("%d ", bea[i]);
    }
    printf("\n");
    for(int i = 0; i<a; i++){
        for(int j = 0; j<a-1; j++){
            if(bea[j]<bea[j+1]){
                tmp = bea[j];
                bea[j] = bea[j+1];
                bea[j+1] = tmp;
            }
        }
    }
    for(int i = 0; i<a; i++){
        printf("%d ", bea[i]);
    }
    return 0;
}