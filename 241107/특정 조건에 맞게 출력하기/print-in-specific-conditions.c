#include <stdio.h>
int cnt = 0;
int main() {
    int a,b,c=0;
    int bea[100];
    
    for(int i = 0; i<100; i++){
        scanf("%d",&bea[cnt]);
        
        if(bea[cnt]==0){
            break;
        }
        cnt++;
    }
    
    for(int j = 0; j<=cnt-1; j++){
        if(bea[j]%2==0){
            bea[j] = bea[j]/2;
        }
        else {
            bea[j] += 3;
        }
    }
    for(int n = 0; n<=cnt-1; n++){
        printf("%d ",bea[n]);
    }
    return 0;
}