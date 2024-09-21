#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);

    int clas=0;
    int bok=0;
    int toilet=0;

    for (int i = 0; i<= a; i++){
        if (i==0){
            continue;
        }
        else if (i%12==0){
            toilet += 1;
        }
        else if (i%3==0){
            bok += 1;
        }
        else if (i%2==0){
            clas += 1;
        }
    }
    printf("%d %d %d",clas,bok,toilet);
    return 0;
}