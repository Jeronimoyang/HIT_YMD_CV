#include "test3_2.h"

int main() {
    int n = 14;
    double x_array[] = {2.06, 3.19,  5.25,  4.56,  6.49,  9.04,  13.06,
                        19.7, 29.95, 26.24, 49.15, 42.57, 64.43, 59.47};
    double y_array[] = {0.87, 1.06, 1.28, 1.94, 1.42, 2.2,  1.88,
                        3.71, 2.61, 3.27, 2.35, 3.75, 3.76, 2.73};
    double x, y;
    Eigen::MatrixXf A(n, 2);
    Eigen::VectorXf B(n);
    for (int i = 0; i < n; i++) {
        A(i, 0) = x_array[i];
        A(i, 1) = 1.0;
        B(i) = y_array[i];
    }
    Eigen::Vector2f sol = A.colPivHouseholderQr().solve(B);
    std::cout << "f(x) = " << sol(0) << " * x + " << sol(1) << std::endl;
    std::ofstream outfile;
    outfile.open("zuixiaoercheng.txt");
    outfile << "x"
            << "   "
            << "y" << std::endl;
    for (x = 0; x <= 100; x = x + 0.05) {
        y = sol(0) * x + sol(1);
        outfile << x << " " << y << std::endl;
    }
    outfile.close();
    return 0;
}