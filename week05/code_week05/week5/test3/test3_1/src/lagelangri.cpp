#include "test3_1.h"

double lagelangri(double *p1, double *p2, int num, double x) {
    int k, i;
    double total;
    double y = 0;
    for (k = 0; k < num; k++) {
        total = 1;
        for (i = 0; i < num; i++) {
            if (i != k) {
                total = total * ((x - p1[i]) / (p1[k] - p1[i]));
            }
        }
        y = y + p2[k] * total;
    }
    return y;
}