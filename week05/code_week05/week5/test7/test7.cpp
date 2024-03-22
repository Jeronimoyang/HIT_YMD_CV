#include "test7.h"

int main() {
    Eigen::Vector3d p1(1, 2, 3);

    Eigen::AngleAxisd r1(30 * M_PI / 180, Eigen::Vector3d::UnitZ());
    Eigen::Matrix3d R1 = r1.toRotationMatrix();

    Eigen::AngleAxisd r2(40 * M_PI / 180, Eigen::Vector3d::UnitY());
    Eigen::Matrix3d R2 = r2.toRotationMatrix();

    Eigen::AngleAxisd r3(50 * M_PI / 180, Eigen::Vector3d::UnitX());
    Eigen::Matrix3d R3 = r3.toRotationMatrix();

    Eigen::Vector3d p2;
    p2 = R1 * R2 * R3 * p1;

    Eigen::Vector3d p3;
    Eigen::Vector3d T(1, 0, 0);
    p3 = p2 + T;

    Eigen::AngleAxisd r4((-60) * M_PI / 180, Eigen::Vector3d::UnitX());
    Eigen::Matrix3d R4 = r4.toRotationMatrix();

    Eigen::AngleAxisd r5(20 * M_PI / 180, Eigen::Vector3d::UnitY());
    Eigen::Matrix3d R5 = r5.toRotationMatrix();

    Eigen::AngleAxisd r6((-50) * M_PI / 180, Eigen::Vector3d::UnitX());
    Eigen::Matrix3d R6 = r6.toRotationMatrix();

    Eigen::Vector3d p4;
    p4 = R4 * R5 * R6 * p3;

    std::cout << "飞行物的坐标为：" << p4.transpose() << std::endl;
    return 0;
}