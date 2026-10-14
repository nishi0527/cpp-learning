#include <iostream>
#include <vector>
#include <string>
struct Player{
    std::string name;
    int hp;
    int attack;
    int defence;
} ;

// == 従来のforの書き方 == //
// void showEnemyNames(const std::vector<Player>& enemies){
//     for(int i = 0; i < enemies.size(); i++){
//         std::cout << enemies[i].name << std::endl;
//     }
// }

void showEnemyNames(const std::vector<Player>& enemies){
    for(Player enemy : enemies){
        std::cout << enemy.name << std::endl;
    }
}

// == 従来のforの書き方 == //
// void showAliveEnemies(const std::vector<Player>& enemies){
//     for(int i = 0; i < enemies.size(); i++){
//         if(enemies[i].hp <= 0){
//             continue;
//         }
//         std::cout << enemies[i].name << std::endl;
//     }
// }

void showAliveEnemies(const std::vector<Player>& enemies){
    for(const Player& enemy : enemies){
        if(enemy.hp > 0){
            std::cout << enemy.name << " HP: " << enemy.hp << std::endl; 
        }
    }
}


// == 従来のforの書き方 == //
// void damageAll(std::vector<Player>& enemies){
//     for(int i = 0; i < enemies.size(); i++){
//         if(enemies[i].hp <= 0){
//             continue;
//         } 
//         enemies[i].hp -= 10;
//     }
// }

void damageAll(std::vector<Player>& enemies){
    for(Player& enemy : enemies){
        enemy.hp -= 10;
    } 
}

void removeDeadEnemies(std::vector<Player>& enemies){
    for(int i = 0; i < enemies.size(); i++){
        if(enemies[i].hp <= 0){
            enemies.erase(enemies.begin() + i);
            i--; // 要素が減り、インデックスが1つずれるから1減らしておく
        }
    }
}

void showEnemies(const std::vector<Player>& enemies){
    for(const Player& enemy : enemies){
        std::cout << enemy.name << std::endl;
        std::cout << "HP: " << enemy.hp << std::endl;
    }
}

int main(){
    std::vector<Player> slimes;

    slimes.push_back({"Slime", 30, 8, 2});
    slimes.push_back({"Goblin", 40, 12, 5});
    slimes.push_back({"Dragon", 200, 30, 20});

    showEnemyNames(slimes);
}
