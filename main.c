#include <stdio.h>

int compute_gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int compute_lcm(int x, int y) {
    return (x / compute_gcd(x, y)) * y;
}

int main() {
    int count;

    scanf("%d", &count);

    int values[count];

    for (int j = 0; j < count; j++) {
        scanf("%d", &values[j]);
    }

    int lcm_result = values[0];
    for (int j = 1; j < count; j++) {
        lcm_result = compute_lcm(lcm_result, values[j]);
    }

    printf("%d\n", lcm_result);

    return 0;
}
