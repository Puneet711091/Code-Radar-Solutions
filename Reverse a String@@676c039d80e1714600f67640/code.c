#include <stdio.h>
#include <string.h>


void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    
    printf("%s",str);
    scanf("%s", str);

    reverseString(str);

    printf("%s\n", str);

    return 0;
}