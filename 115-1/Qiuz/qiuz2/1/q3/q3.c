// 10221 Satellites
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    double s, a;
    const double PI = acos(-1.0); // 使用系統最高精度 PI
    char str[10] = "";

    while (scanf("%lf %lf %s", &s, &a, str) != EOF) {
        if (!strcmp(str, "min")) {
            a /= 60.0;
        }

        if (a > 180.0) {
            a = 360.0 - a;
        }

        double rad = a * (PI / 180.0);
        double R = 6440.0 + s;
        double arc = R * rad;
        double chord = 2.0 * R * sin(rad / 2.0);

        printf("%.6f %.6f\n", arc, chord);
    }
    return 0;
}