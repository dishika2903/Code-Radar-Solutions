#include <stdio.h>
int main() {
    char name[1000];
    int age;
    char hobby[1000];
    scanf("%s %d", &name, &age);
    scanf("%s", &hobby);
    printf("Name: %s\n Age: %d\n Hobby: %s", name, age, hobby);
    return 0;
}