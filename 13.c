#include <stdio.h>
int main() {
    int b;
    scanf("%d", &b);
    printf("%d\n", b / 1024);
    printf("%d\n", b / 1048576);
    printf("%d\n", b / 1073741824);
    return 0;
}
