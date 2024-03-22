#include "test5.h"

void printAccount(GameAccount *p) {
    std::cout << "账户ID为：" << p->game_id << std::endl;
    std::cout << "账户名为：" << p->game_name << std::endl;
    std::cout << "账户游戏库存数为：" << p->game_number << std::endl;
    std::cout << "库存游戏为：";
    for (int i = 0; i < p->game_number; i++) {
        std::cout << p->game_array[i] << " ";
    }
    std::cout << std::endl;
}