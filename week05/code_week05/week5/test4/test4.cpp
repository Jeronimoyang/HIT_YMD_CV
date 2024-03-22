#include "test4.h"

#define size 10
int main() {
    Eigen::MatrixXf A(size, size);
    A = Eigen::MatrixXf::Random(size, size);
    A.topLeftCorner(3, 3) = Eigen::MatrixXf::Zero(3, 3);
    A.bottomRightCorner(5, 5) = Eigen::MatrixXf::Identity(5, 5);
    Eigen::MatrixXf B(size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            B(i, j) = i * size + j + 1;
        }
    }
    std::cout << "矩阵A为：" << std::endl;
    std::cout << A << std::endl;
    std::cout << "矩阵B为：" << std::endl;
    std::cout << B << std::endl;
    Eigen::MatrixXf A_transpose(size, size);
    A_transpose = A.transpose();
    std::cout << "矩阵A的转置为：" << std::endl;
    std::cout << A_transpose << std::endl;
    Eigen::MatrixXf C(size, size);
    C = A_transpose * B;
    std::cout << "矩阵C为：" << std::endl;
    std::cout << C << std::endl;
    std::cout << "矩阵C中最大的元素为：" << std::endl;
    std::cout << C.maxCoeff() << std::endl;
    std::cout << "矩阵C的行列式值为：" << std::endl;
    std::cout << A.determinant() << std::endl;
    return 0;
}