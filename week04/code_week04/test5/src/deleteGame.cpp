#include "test5.h"

void deleteGame(GameAccount *p) {
    std::cout << "输入要删除的游戏编码" << std::endl;
    int number, flag;
    flag = 0;
    std::cin >> number;
    for (int i = 0; i < p->game_number; i++) {
        if (p->game_array[i] == number) {
            flag = 1;
            for (int j = i; j < p->game_number; j++) {
                p->game_array[j] = p->game_array[j + 1];
            }
        }
    }
    if (flag == 0) {
        std::cout << "该游戏不存在" << std::endl;
        return;
    }
    p->game_number--;
    std::cout << "该游戏已经删除" << std::endl;
}