#include "test5_2.h"

int main() {
    std::string temp1, temp2;
    std::set<std::string> a, b, c;
    char *file1 = "../wenben1.txt";
    std::ifstream fn1;
    fn1.open(file1);
    while (!fn1.eof()) {
        fn1 >> temp1;
        a.insert(temp1);
    }
    fn1.close();

    char *file2 = "../wenben2.txt";
    std::ifstream fn2;
    fn2.open(file2);
    while (!fn2.eof()) {
        fn2 >> temp2;
        b.insert(temp2);
    }
    fn2.close();
    set_intersection(a.begin(), a.end(), b.begin(), b.end(),
                     inserter(c, c.begin()));

    char *file3 = "../wenben3.txt";
    std::ofstream fn3;
    fn3.open(file3);
    for (auto &out : c) {
        fn3 << out << " ";
    }
    fn3.close();
    return 0;
}
