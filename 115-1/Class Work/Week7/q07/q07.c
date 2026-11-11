// uva11321
#include <stdio.h>

int nums[10000];

int compare(int a, int b, int m) {
    int remainder_a = a % m;
    int remainder_b = b % m;

    if (remainder_a != remainder_b) {
        return remainder_a < remainder_b;
    }

    if ((a % 2 != 0) != (b % 2 != 0)) {
        return a % 2 != 0;
    }

    if (a % 2 != 0) {
        return a > b;
    }

    return a < b;
}

void sort(int arr[], int len, int m) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (!compare(arr[i], arr[j], m)) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(void) {
    int n, m;

    while (scanf("%d %d", &n, &m) == 2) {
        if (n == 0 && m == 0) {
            break;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }

        sort(nums, n, m);

        printf("%d %d\n", n, m);
        for (int i = 0; i < n; i++) {
            printf("%d\n", nums[i]);
        }
    }

    printf("0 0\n");
    return 0;
}