// Your code here...
#include <stdio.h>
int main() {
    int a,b;
    char o;
    scanf("%d %d %c", &a,&b,&o);
    if (o=='+') {
        printf("%d", a+b);
    }
    else if (o=='-') {
        printf("%d", a-b);
    }
    else if (o=='*') {
        printf("%d", a*b);
    }
    else if (o=='/') {
        if (b==0){
            printf("Error");
        }
        else {
            printf("%d", a/b);
        }
    }
    else {
        printf("Error");
    }
    return 0;
}