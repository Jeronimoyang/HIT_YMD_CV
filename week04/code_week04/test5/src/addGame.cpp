#include "test5.h"

void addGame(GameAccount *p) {
    std::cout << "输入要添加的游戏编码：" << std::endl;
    int number;
    std::cin >> number;
    for (int i = 0; i < p->game_number; i++) {
        if (number == p->game_array[i]) {
            std::cout << "已经存在该游戏" << std::endl;
            return;
        }
    }
    p->game_array[p->game_number] = number;
    p->game_number++;
    std::cout << "该游戏已经添加" << std::endl;
}