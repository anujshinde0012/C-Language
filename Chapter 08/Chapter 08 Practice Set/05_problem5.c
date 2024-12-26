// Question : Write your own version of strcpy function from <string.h>

#include <stdio.h>

// Corrected function name and removed unnecessary variable
int mystrlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

// Copy function uses the corrected mystrlen
void mystrcpy(char target[], char source[]) {
    for (int i = 0; i < mystrlen(source); i++) {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0'; // Ensure the string is null-terminated
}

int main() {
    char source[] = "Anuj";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s", source, target);
    return 0;
}
