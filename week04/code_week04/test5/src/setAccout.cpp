#include "test5.h"

void setAccout(GameAccount *p) {
    std::cout << "输入账户ID：" << std::endl;
    std::cin >> p->game_id;
    std::cout << "输入账户名：" << std::endl;
    std::cin >> p->game_name;
    std::cout << "输入游戏库存数：" << std::endl;
    std::cin >> p->game_number;
    std::cout << "逐个输入游戏编码：" << std::endl;
    for (int i = 0; i < p->game_number; i++) {
        std::cin >> p->game_array[i];
    }
    std::cout << "账户已经创建成功" << std::endl;
}