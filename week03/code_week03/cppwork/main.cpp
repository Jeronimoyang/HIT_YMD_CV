/**
 * @file main.cpp
 * @brief
 * @author yang mingda (1507213842@qq.com)
 * @date 2023-08-09
 *
 * @copyright Copyright (C) 2023, HITCRT_VISION, all rights reserved.
 *
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Author  <th>Description
 * <tr><td>2023-08-09 <td>yang mingda  <td>
 * </table>
 */

#include <week3.h>

#include <iostream>

int main() {
    int question_number;
    std::cout << "请输入题号：";
    std::cin >> question_number;
    if (question_number == 1) {
        float a, b, c;
        std::cout << "输入数字a、b、c：" << std::endl;
        std::cin >> a >> b >> c;
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    std::cout << "该方程的解为任意值" << std::endl;
                } else {
                    std::cout << "该方程无解" << std::endl;
                }
            } else {
                float result;
                result = -(c / b);
                std::cout << "该方程的解为：" << result << std::endl;
            }
        } else {
            float flag;
            flag = b * b - 4 * a * c;
            if (flag == 0) {
                float result;
                result = -(b / (2 * a));
                std::cout << "该方程的解为：" << result << std::endl;
            } else if (flag > 0) {
                float result1, result2;
                result1 = (sqrt(flag) - b) / (2 * a);
                result2 = -(sqrt(flag) + b) / (2 * a);
                std::cout << "该方程的第一个解为：" << result1
                          << "，第二个解为：" << result2 << std::endl;
            } else if (flag < 0) {
                float result1_real, result1_imaginary, result2_real,
                    result2_imaginary;
                result1_real = -(b / (2 * a));
                result2_real = -(b / (2 * a));
                result1_imaginary = (sqrt(4 * a * c - b * b)) / (2 * a);
                result2_imaginary = -(sqrt(4 * a * c - b * b)) / (2 * a);
                if (b == 0) {
                    std::cout << "该方程的第一个解为：" << result1_imaginary
                              << "i"
                              << "，第二个解为：" << result2_imaginary << "i"
                              << std::endl;
                } else {
                    std::cout << "该方程的第一个解为：" << result1_real << "+"
                              << result1_imaginary << "i";
                    std::cout << "，该方程的第二个解为：" << result2_real
                              << result2_imaginary << "i" << std::endl;
                }
            }
        }
    }
    if (question_number == 2) {
        int num;
        std::cout << "输入要添加成员的个数：";
        std::cin >> num;
        chaff* array = new chaff[num];
        std::cout << "请按顺序输入：" << std::endl;
        for (int i = 0; i < num; i++) {
            char src[20];
            std::cin >> src;
            strcpy(array[i].dross, src);
            std::cin >> array[i].slag;
        }
        std::cout << "输出结果为：" << std::endl;
        for (int i = 0; i < num; i++) {
            std::cout << array[i].dross << " " << array[i].slag << std::endl;
        }
        delete[] array;
    }
    if (question_number == 3) {
        int num;
        std::cout << "要输入的字符个数为：" << std::endl;
        std::cin >> num;
        int flag = num;
        char* array = new char[num];
        std::cout << "请输入：" << std::endl;
        for (int i = 0; i < num; i++) {
            std::cin >> array[i];
        }
        std::cout << "输入为：" << std::endl;
        for (int i = 0; i < num; i++) {
            if (array[i] == '@') {
                std::cout << array[i];
                flag = i;
                break;
            } else {
                if (!isdigit(array[i])) {
                    std::cout << array[i];
                }
            }
        }
        std::cout << std::endl;
        std::cout << "转换后为：" << std::endl;
        for (int i = 0; i <= flag; i++) {
            if (!isdigit(array[i])) {
                if ((array[i] >= 'a') && (array[i] <= 'z')) {
                    std::cout << (char)toupper(array[i]);
                    continue;
                } else if ((array[i] >= 'A') && (array[i] <= 'Z')) {
                    std::cout << (char)tolower(array[i]);
                    continue;
                }
                std::cout << array[i];
            }
        }
        delete[] array;
    }
    if (question_number == 4) {
        float tax;
        int flag;
        float income;
        for (int i = 0; 1; i++) {
            std::cout << "输入所得收入：" << std::endl;
            std::cin >> income;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cout << "输入的内容不合法" << std::endl;
                break;
            } else if (income >= 0) {
                if (income <= 5000) {
                    tax = 0;
                    std::cout << "所得税为：" << tax << "tvarps" << std::endl;
                } else if ((income > 5000) && (income <= 15000)) {
                    tax = (income - 5000) * 0.1;
                    std::cout << "所得税为：" << tax << "tvarps" << std::endl;
                } else if ((income > 15000) && (income <= 35000)) {
                    tax = 10000 * 0.1 + (income - 15000) * 0.15;
                    std::cout << "所得税为：" << tax << "tvarps" << std::endl;
                } else if (income > 35000) {
                    tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
                    std::cout << "所得税为：" << tax << "tvarps" << std::endl;
                }
            } else if (income < 0) {
                std::cout << "输入的内容不合法" << std::endl;
                break;
            }
        }
    }
}