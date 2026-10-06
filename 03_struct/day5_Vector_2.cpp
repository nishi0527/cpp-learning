#include <iostream>
#include <vector>
#include <string>
struct Player{
    std::string name;
    int hp;
    int attack;
    int defence;
} ;

void showEnemyNames(const std::vector<Player>& enemies){
    for(int i = 0; i < enemies.size(); i++){
        std::cout << enemies[i].name << std::endl;
    }
}

void showAliveEnemies(const std::vector<Player>& enemies){
    for(int i = 0; i < enemies.size(); i++){
        if(enemies[i].hp <= 0){
            continue;
        }
        std::cout << enemies[i].name << std::endl;
    }
}


int main(){
    std::vector<Player> slimes;

    slimes.push_back({"Slime", 30, 8, 2});
    slimes.push_back({"Goblin", 40, 12, 5});
    slimes.push_back({"Dragon", 200, 30, 20});

    showEnemyNames(slimes);
}
