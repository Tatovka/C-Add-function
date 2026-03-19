#include <stdio.h>
unsigned char add(unsigned char a, unsigned char b);

int main() {
    printf("%d\n", add(42, 27));
    printf("%d\n", add(21, 21));
    printf("%d\n", add(186, 42));
    return 0;
}