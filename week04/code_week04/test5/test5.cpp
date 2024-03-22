#include "test5.h"

int main() {
    int answer;
    GameAccount player;
    GameAccount *pt = &player;
    for (int i = 0; 1; i++) {
        print();
        std::cin >> answer;
        if (answer == 1) {
            setAccout(pt);
        } else if (answer == 2) {
            printAccount(pt);
        } else if (answer == 3) {
            addGame(pt);
        } else if (answer == 4) {
            deleteGame(pt);
        } else if (answer == 0) {
            break;
        }
    }
    return 0;
}