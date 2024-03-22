#include "test5_1.h"

int main() {
    Port wine1("aaa", "good", 10);
    wine1.Show();
    std::cout << wine1 << std::endl;
    VintagePort wine2("bbb", 55, "thick", 77);
    wine2.Show();
    std::cout << wine2 << std::endl;
    return 0;
}