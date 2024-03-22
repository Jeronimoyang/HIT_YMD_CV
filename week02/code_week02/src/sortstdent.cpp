#include "week2.h"

void sort(students arr[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i].score < arr[j].score) {
                students tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
};