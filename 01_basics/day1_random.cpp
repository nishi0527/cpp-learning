#include <iostream>
#include <random>

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,100);

    int answer = dist(gen);
    int number;
    std::cin >> number ;

    if(number > answer){
        std::cout << "もっと小さい" << std::endl;
    }
    else if (number < answer){
        std::cout << "もっと大きい" << std::endl;
    }
    else{
        std::cout << "正解" << std::endl;
    }

    std::cout << "答えは" << answer << std::endl;
    return 0;
}