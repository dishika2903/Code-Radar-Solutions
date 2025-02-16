// Your code here...
#include <stdio.h>
int main() {
    int a,i,c=0;
    scanf("%d", &a);
    for (i=2;i<a;i++) {
        if (a%i==0) {
            c=c+1;
        }
    }
    if ((c!=0) || (a==2)) {
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}