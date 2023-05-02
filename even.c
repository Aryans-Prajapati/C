#include <stdio.h>

int main() {
    int even= 0, odd = 0 ,i;
    for (i = 1; i<=10; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    for (i = 1;i <=10; i++) {
        if (i % 2 == 1) {
            printf("%d \n", i);
        }
    }
    return 0;
}
