#include <stdio.h>

void foo(int a) {
    if(a == 1) {
        printf("cond\n");
    }
    else {
        printf("alt\n");
    }
    printf("after\n");
}

int main() {
    foo(1);
}