#include "week2.h"

void insertion_sort(int *p, int len) {
    for (int i = 1; i < len; i++) {
        int key = p[i];
        int j = i - 1;
        while ((j >= 0) && (key < p[j])) {
            p[j + 1] = p[j];
            j--;
        }
        p[j + 1] = key;
    }
}

double find_aver(int *p, int len) {
    double total = 0;
    for (int i = 0; i < len; i++) {
        total = total + p[i];
    }
    return (total / len);
}

double find_mid(int *p, int len) {
    double total;
    if (len % 2 == 1) {
        total = p[(len - 1) / 2];
        return total;
    } else if (len % 2 == 0) {
        total = p[len / 2] + p[(len / 2) - 1];
        total = total / 2;
        return total;
    }
}

int find_mode_quantity(int *p, int len) {
    int many = 1, less = 1;
    int flag;
    int number = 0;
    for (int i = 0; i < len; i++) {
        less = 1;
        for (int j = i; j < len; j++) {
            if (p[j] == p[j + 1]) {
                less = less + 1;
            } else {
                if (less > many) {
                    many = less;
                    less = 1;
                }
                break;
            }
        }
    }
    flag = many;
    less = 1;
    for (int i = 0; i < len; i++) {
        less = 1;
        for (int j = i; j < len; j++) {
            if (p[j] == p[j + 1]) {
                less = less + 1;
            } else {
                if (less == flag) {
                    number = number + 1;
                }
                break;
            }
        }
    }
    return number;
}

void find_mode(int *p, int *pr, int len) {
    int many = 1, less = 1;
    int flag;
    int k = 0;
    for (int i = 0; i < len; i++) {
        less = 1;
        for (int j = i; j < len; j++) {
            if (p[j] == p[j + 1]) {
                less = less + 1;
            } else {
                if (less > many) {
                    many = less;
                    less = 1;
                }
                break;
            }
        }
    }
    flag = many;
    less = 1;
    for (int i = 0; i < len; i++) {
        less = 1;
        for (int j = i; j < len; j++) {
            if (p[j] == p[j + 1]) {
                less = less + 1;
            } else {
                if (less == flag) {
                    pr[k] = p[j];
                    k = k + 1;
                }
                break;
            }
        }
    }
}