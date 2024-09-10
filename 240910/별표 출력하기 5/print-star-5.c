#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    char c = '*';
    scanf("%d",&a);

    for (int i = a; i>0; i--)
    {
        for (int j = i; j>0; j--)
        {
            for (int j = i; j>0; j--)
            {
                printf("%c", c);
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}