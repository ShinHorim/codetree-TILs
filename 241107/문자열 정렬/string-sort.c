#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // 문자열 입력받기
    
    scanf("%s", &str[0]);

    int len = strlen(str);

    // 버블 정렬
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    // 정렬된 문자열 출력
    printf("%s", str);

    return 0;
}