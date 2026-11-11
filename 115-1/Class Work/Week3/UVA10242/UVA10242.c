// Fourth Point!!
#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    
    while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) != EOF) {
        double ans_x,ans_y;

        if (x1==x3 && y1==y3) {
            ans_x = x2 + x4 - x1;
            ans_y = y2 + y4 - y1;
        } else if (x1==x4 && y1==y4) {
            ans_x = x2 + x3 - x1;
            ans_y = y2 + y3 - y1;
        } else if (x2==x3 && y2==y3) {
            ans_x = x1 + x4 - x2;
            ans_y = y1 + y4 - y2;
        } else {
            ans_x = x1 + x3 - x2;
            ans_y = y1 + y3 - y2;
        }

        // .3f 小數點後3位
        printf("%.3f %.3f\n", ans_x, ans_y);
    }

    return 0;
}