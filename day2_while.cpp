#include <iostream>
#include <random>

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,100);

    int answer = dist(gen);
    int number = -1;
    int count = 0;

    while(number != answer){
        count ++;

        std::cout << "数字を入力してください：" << std::endl;
        std::cin >> number;

        if(number > answer){
            std::cout << "もっと小さい" << std::endl;
        }

        else if(number < answer){
            std::cout << "もっと大きい" << std::endl;            
        }

        else{
            std::cout << "正解" << std::endl;
        }
    }

    std::cout << count << "回で正解しました！" << std::endl;

    return 0;
}