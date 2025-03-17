#include <stdio.h>
#include <string.h>

// Function to reverse a string
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

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Call the function
    reverseString(str);

    // Output reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}