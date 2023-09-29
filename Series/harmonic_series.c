//harmonic progression
#include <stdio.h>
int main() {
    int a, d, n;
    printf("Enter the first term (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Harmonic Progression (HP) with %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%f ", 1.0 / (a + i * d));
    }
    return 0;
}