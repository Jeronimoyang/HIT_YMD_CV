#include <iostream>

#include "week2.h"
int main() {
    int question_number;
    std::cout << "请输入题号：";
    std::cin >> question_number;
    if (question_number == 1) {
        int i;
        int num_arr[1000];
        for (i = 0; 1; i++) {
            std::cin >> num_arr[i];
            if (getchar() == '\n') {
                break;
            }
        }
        sortnumber(num_arr, i + 1);
        for (int j = 0; j <= i; j++) {
            std::cout << num_arr[j] << std::endl;
        }
    }
    if (question_number == 2) {
        int total = 0;
        int arr[3][3];
        int i, j;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                std::cin >> arr[i][j];
            }
        }
        std::cout << "交换后：" << std::endl;
        for (j = 0; j < 3; j++) {
            for (i = 0; i < 3; i++) {
                if ((i == j) || (i + j == 2)) {
                    total = total + arr[i][j];
                }
                std::cout << arr[i][j] << " ";
                if (i == 2) {
                    std::cout << std::endl;
                }
            }
        }
        std::cout << "对角线元素之和为：" << total << std::endl;
    }
    if (question_number == 3) {
        int n, key, len;
        int arr[100];
        int *p = arr;
        std::cout << "输入整数的个数为：";
        std::cin >> n;
        for (int i = 0; 1; i++) {
            std::cin >> arr[i];
            if (getchar() == '\n') {
                len = i + 1;
                break;
            }
        }
        key = arr[0];
        for (int i = 1; i < len; i++) {
            if (p[i] > key) {
                key = p[i];
            }
        }
        std::cout << "第";
        for (int i = 0; i < len; i++) {
            if (p[i] == key) {
                std::cout << "'" << i + 1 << "'";
            }
        }
        std::cout << "个数是最大值" << std::endl;
        std::cout << "最大值为" << key << std::endl;
    }
    if (question_number == 4) {
        int num;
        int *p = new int[num];
        int quantity;
        double aver, mid;
        std::cout << "调查的学生个数为：";
        std::cin >> num;
        std::cout << "每位学生的观影数量" << std::endl;
        for (int i = 0; i < num; i++) {
            std::cin >> p[i];
        }
        insertion_sort(p, num);
        aver = find_aver(p, num);
        mid = find_mid(p, num);
        quantity = find_mode_quantity(p, num);
        int *pr = new int[quantity];
        find_mode(p, pr, num);
        std::cout << "平均值为：" << aver << std::endl;
        std::cout << "中位数为：" << mid << std::endl;
        std::cout << "众数为：";
        for (int i = 0; i < quantity; i++) {
            std::cout << "'" << pr[i] << "'";
        }
        delete[] p;
        delete[] pr;
    }
    if (question_number == 5) {
        int num;
        std::cout << "输入字符串的个数为：";
        std::cin >> num;
        char str[num][100];
        char temp[100];
        for (int i = 0; i < num; i++) {
            std::cin >> str[i];
        }
        for (int i = 0; i < num; i++) {
            for (int j = i + 1; j < num; j++) {
                for (int k = 0; k < 100; k++) {
                    if ((str[i][k] >= 'a') && (str[i][k] <= 'z') &&
                        (str[j][k] >= 'a') && (str[j][k] <= 'z')) {
                        if (str[i][k] - str[j][k] > 0) {
                            strcpy(temp, str[i]);
                            strcpy(str[i], str[j]);
                            strcpy(str[j], temp);
                            break;
                        } else if (str[i][k] - str[j][k] < 0) {
                            break;
                        }
                    } else if ((str[i][k] >= 'A') && (str[i][k] <= 'Z') &&
                               (str[j][k] >= 'A') && (str[j][k] <= 'Z')) {
                        if (str[i][k] - str[j][k] > 0) {
                            strcpy(temp, str[i]);
                            strcpy(str[i], str[j]);
                            strcpy(str[j], temp);
                            break;
                        } else if (str[i][k] - str[j][k] < 0) {
                            break;
                        }
                    } else if ((str[i][k] >= 'a') && (str[i][k] <= 'z') &&
                               (str[j][k] >= 'A') && (str[j][k] <= 'Z')) {
                        if (str[i][k] - 32 - str[j][k] > 0) {
                            strcpy(temp, str[i]);
                            strcpy(str[i], str[j]);
                            strcpy(str[j], temp);
                            break;
                        } else if (str[i][k] - 32 - str[j][k] < 0) {
                            break;
                        }
                    } else if ((str[i][k] >= 'A') && (str[i][k] <= 'Z') &&
                               (str[j][k] >= 'a') && (str[j][k] <= 'z')) {
                        if (str[i][k] + 32 - str[j][k] > 0) {
                            strcpy(temp, str[i]);
                            strcpy(str[i], str[j]);
                            strcpy(str[j], temp);
                            break;
                        } else if (str[i][k] + 32 - str[j][k] < 0) {
                            break;
                        }
                    } else if ((str[i][k] >= 'a') && (str[i][k] <= 'z') &&
                               (str[j][k] == '\000')) {
                        strcpy(temp, str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], temp);
                        break;
                    } else if ((str[i][k] >= 'A') && (str[i][k] <= 'Z') &&
                               (str[j][k] == '\000')) {
                        strcpy(temp, str[i]);
                        strcpy(str[i], str[j]);
                        strcpy(str[j], temp);
                        break;
                    }
                }
            }
        }
        std::cout << "排序后：" << std::endl;
        for (int i = 0; i < num; i++) {
            std::cout << str[i] << std::endl;
        }
    }
    if (question_number == 6) {
        int num;
        std::cout << "录入的学生数量为：";
        std::cin >> num;
        struct student arr[num];
        std::cout << "姓名 学号 成绩" << std::endl;
        for (int i = 0; i < num; i++) {
            std::cin >> arr[i].name;
            std::cin >> arr[i].student_number;
            std::cin >> arr[i].score;
        }
        std::ofstream File;
        File.open("student.txt");
        for (int i = 0; i < num; i++) {
            File << arr[i].name << " " << arr[i].student_number << " "
                 << arr[i].score << std::endl;
        }
        File.close();
        for (int i = 0; i < num; i++) {
            std::cout << "姓名：" << arr[i].name << " 学号："
                      << arr[i].student_number << " 成绩：" << arr[i].score
                      << std::endl;
        }
    }
    if (question_number == 7) {
        int i = 0;
        int num = 0;
        std::ifstream infile;
        struct students arr[1000];
        infile.open("student.txt", std::ios::in);
        if (!infile) {
            std::cout << "open error!" << std::endl;
            exit(1);
        }
        while (!infile.eof()) {
            infile >> arr[i].name >> arr[i].student_number >> arr[i].score;
            num++;
            i++;
        }
        sort(arr, num);
        for (int j = 0; j < num - 1; j++) {
            std::cout << "姓名：" << arr[j].name << " 学号："
                      << arr[j].student_number << " 成绩：" << arr[j].score
                      << std::endl;
        }
    }
    if (question_number == 8) {
        complex num1, num2;
        std::cout << "输入第一个复数的实部和虚部：";
        std::cin >> num1.real_number;
        std::cin >> num1.imaginary_number;
        std::cout << "输入第一个复数的实部和虚部：";
        std::cin >> num2.real_number;
        std::cin >> num2.imaginary_number;
        add(num1, num2);
        subtract(num1, num2);
        multiply(num1, num2);
        divide(num1, num2);
    }
    return 0;
}