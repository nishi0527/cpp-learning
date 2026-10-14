#include <iostream>

enum class Job{
    Warrior,
    Mage,
    Thief
};

int getInitialAttack(Job job){
    switch(job){
        case Job::Warrior:
            return 20;
        case Job::Mage:
            return 30;
        case Job::Thief:
            return 15;
    }

    return 0;

}

int main(){
    Job playerJob = Job::Warrior;
    int attack = getInitialAttack(playerJob);
    std::cout << "Attack : " << attack << std::endl;

    return 0;
}