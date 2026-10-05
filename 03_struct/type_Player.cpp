#include <iostream>
#include <string>
#include <vector>

struct Player{
    std::string name;
    int hp;
    int attack;
    int defence;
}; // <- セミコロンが必要

void showPlayer(const Player& player){
    std::cout << player.name << std::endl;
    std::cout << player.hp << std::endl;
    std::cout << player.attack << std::endl;
    std::cout << player.defence << std::endl;
}

void attackPlayer(const Player& attacker, Player& target){
    if(target.hp <= 0){
        return;
    }

    std::cout << attacker.name << "の攻撃！" << std::endl;

    int damage = attacker.attack - target.defence;

    if(damage < 1){
        damage = 1;
    }

    target.hp -= damage;

    if(target.hp < 0){
        target.hp = 0;
    }

    std::cout << target.name << "に" << damage << "のダメージ！" << std::endl;
    std::cout << target.name << "の残りHP：" << target.hp << std::endl;

    /*

    攻撃力のみ考慮したver

    if(attacker.attack > target.hp){
        target.hp = 0;
    }

    else{
        target.hp -= attacker.attack;
    }

    // == 短く書くコツ == //
    // target.hp -= attacker.attack;

    // if(target.hp < 0){
    //     target.hp = 0;
    // }

    */

}

bool hasAlivePlayer(const std::vector<Player>& players){
    for(int i = 0; i < players.size(); i++){
        if(players[i].hp > 0){
            return true;
        }
    }
    return false;
}

int main(){
    Player hero = {"Hero", 100, 20, 10};

    // == 冗長な代入 == //
    // hero.name = "Hero"; // <- ダブルクオーテーションが必要
    // hero.hp = 100;
    // hero.attack = 20;
    // hero.defence = 10;

    std::vector<Player> slimes;

    slimes.push_back({"Slime", 30, 8, 2});
    slimes.push_back({"Slime", 30, 8, 2});
    slimes.push_back({"Slime", 30, 8, 2});

    // Player slime_00 = {"Slime", 30, 8, 2};
    // Player slime_01 = {"Slime", 30, 8, 2};
    // Player slime_02 = {"Slime", 30, 8, 2};
    
    // == 冗長な代入 == //
    // slime.name = "Slime";
    // slime.hp = 30;
    // slime.attack = 8;
    // slime.defence = 2;

    while(hero.hp > 0 && hasAlivePlayer(slimes)){
        for(int i = 0; i < slimes.size(); i++){
            if(slimes[i].hp <= 0){
                continue;
            }

            attackPlayer(hero, slimes[i]);
        }
        
        // if(slimes[0].hp > 0){
        //     attackPlayer(hero, slimes[0]);
        // }

        // else if(slimes[1].hp > 0){
        //     attackPlayer(hero, slimes[1]);
        // }

        // else{
        //     attackPlayer(hero, slimes[2]);
        // }

        for(int i = 0; i < slimes.size(); i++){
            if(slimes[i].hp > 0 && hero.hp > 0){
                attackPlayer(slimes[i], hero);
            }
        }
    }


    showPlayer(hero);

    for(int i = 0; i < slimes.size(); i++){
        showPlayer(slimes[i]);
    }
    // showPlayer(slime_00);
    // showPlayer(slime_01);
    // showPlayer(slime_02);

    return 0;
}