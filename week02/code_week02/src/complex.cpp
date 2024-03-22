#include "week2.h"

void add(complex num1, complex num2) {
    double real_total, imaginary_total;
    real_total = num1.real_number + num2.real_number;
    imaginary_total = num1.imaginary_number + num2.imaginary_number;
    std::cout << "两个数相加为：";
    if (imaginary_total == 0) {
        std::cout << real_total << std::endl;
    }
    if (imaginary_total > 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << "+" << imaginary_total << "i"
                      << std::endl;
        }
    }
    if (imaginary_total < 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << imaginary_total << "i" << std::endl;
        }
    }
}

void subtract(complex num1, complex num2) {
    double real_total, imaginary_total;
    real_total = num1.real_number - num2.real_number;
    imaginary_total = num1.imaginary_number - num2.imaginary_number;
    std::cout << "两个数相减为";
    if (imaginary_total == 0) {
        std::cout << real_total << std::endl;
    }
    if (imaginary_total > 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << "+" << imaginary_total << "i"
                      << std::endl;
        }
    }
    if (imaginary_total < 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << imaginary_total << "i" << std::endl;
        }
    }
}

void multiply(complex num1, complex num2) {
    double real_total, imaginary_total;
    real_total = (num1.real_number * num2.real_number) -
                 (num1.imaginary_number * num2.imaginary_number);
    imaginary_total = (num1.real_number * num2.imaginary_number) +
                      (num1.imaginary_number * num2.real_number);
    std::cout << "两个数相乘为：";
    if (imaginary_total == 0) {
        std::cout << real_total << std::endl;
    }
    if (imaginary_total > 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << "+" << imaginary_total << "i"
                      << std::endl;
        }
    }
    if (imaginary_total < 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << imaginary_total << "i" << std::endl;
        }
    }
}

void divide(complex num1, complex num2) {
    double real_total, imaginary_total;
    real_total = ((num1.real_number * num2.real_number) +
                  (num1.imaginary_number * num2.imaginary_number)) /
                 ((num2.real_number * num2.real_number) +
                  (num2.imaginary_number * num2.imaginary_number));
    imaginary_total = ((num1.imaginary_number * num2.real_number) -
                       (num1.real_number * num2.imaginary_number)) /
                      ((num2.real_number * num2.real_number) +
                       (num2.imaginary_number * num2.imaginary_number));
    std::cout << "两个数相除为：";
    if (imaginary_total == 0) {
        std::cout << real_total << std::endl;
    }
    if (imaginary_total > 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << "+" << imaginary_total << "i"
                      << std::endl;
        }
    }
    if (imaginary_total < 0) {
        if (real_total == 0) {
            std::cout << imaginary_total << "i" << std::endl;
        } else {
            std::cout << real_total << imaginary_total << "i" << std::endl;
        }
    }
}