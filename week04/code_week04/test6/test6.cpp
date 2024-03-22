#include "test6.h"

int main() {
    vector a(2, 3), b(5, 6);
    std::cout << "向量a为：" << a << "向量b为：" << b;
    std::cout << "向量a与向量b相加为：" << a + b << "向量a与向量b相减为："
              << a - b << "向量a与向量b点乘为：" << a * b << std::endl;
    return 0;
}