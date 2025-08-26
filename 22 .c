#include <stdio.h>
int main() {
    float g;
    scanf("%f", &g);
    printf("%f", g + (0.1 * g) - (0.03 * g));
    return 0;
}
