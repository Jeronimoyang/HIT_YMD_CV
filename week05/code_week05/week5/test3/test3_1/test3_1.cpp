#include "test3_1.h"

int main() {
    int n = 14;
    double x, y;
    double x_array[14] = {2.06, 3.19,  5.25,  4.56,  6.49,  9.04,  13.06,
                          19.7, 29.95, 26.24, 49.15, 42.57, 64.43, 59.47};
    double y_array[14] = {0.87, 1.06, 1.28, 1.94, 1.42, 2.2,  1.88,
                          3.71, 2.61, 3.27, 2.35, 3.75, 3.76, 2.73};
    double *p1 = x_array;
    double *p2 = y_array;
    std::ofstream outfile;
    outfile.open("lagelangri.txt");
    outfile << "x"
            << "   "
            << "y" << std::endl;
    for (x = 0; x <= 100; x = x + 0.05) {
        y = lagelangri(p1, p2, n, x);
        outfile << x << " " << y << std::endl;
    }
    outfile.close();
    return 0;
}