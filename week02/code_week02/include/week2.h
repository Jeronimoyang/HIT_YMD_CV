#pragma once
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

// 1
void sortnumber(int arr[], int len);

// 2

// 3

// 4
void insertion_sort(int *p, int len);
double find_aver(int *p, int len);
double find_mid(int *p, int len);
int find_mode_quantity(int *p, int len);
void find_mode(int *p, int *pr, int len);

// 5

// 6
struct student {
    std::string name;
    int student_number;
    int score;
};

// 7
struct students {
    std::string name;
    int student_number;
    int score;
};
void sort(students arr[], int len);

// 8
struct complex {
    double real_number;
    double imaginary_number;
};
void add(complex num1, complex num2);
void subtract(complex num1, complex num2);
void multiply(complex num1, complex num2);
void divide(complex num1, complex num2);