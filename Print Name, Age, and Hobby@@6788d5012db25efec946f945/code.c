#include <stdio.h>



int main() {
    char name[100];
    int age;
    char hobby[100];

    // Taking input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your favorite hobby: ");
    scanf("%s", hobby);

    // Printing output
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}



