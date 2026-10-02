#include <iostream>
#include <random>

void showHint(int number, int answer){
    if(number > answer){
        std::cout << "もっと小さい" << std::endl;
    }

    else if (number < answer){
        std::cout << "もっと大きい" << std::endl;
    }

    else{
        std::cout << "正解" << std::endl;
    }
}

int generateAnswer(){
    //乱数生成処理
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1,100);
    
    int answer = dist(gen);
    return answer;
}

int main(){
    int answer = generateAnswer();

    int number = -1;
    int count = 0;

    while(number != answer){
        std::cout << "数字を入力してください：" << std::endl;
        std::cin >> number;
        count ++;
        showHint(number, answer); 
    }

    std::cout << count << "回で正解しました！" << std::endl;

    return 0;
}