#include <iostream>

int main(){
    int scores[5] = {80, 65, 90, 75, 100};
    int max_point = 0;

    for(int i = 0; i < 5; i++){
        if(max_point < scores[i]){
            max_point = scores[i];
        }
    }

    std::cout << max_point << std::endl;

    // int sum = 0;
    // std::cout << scores[2] << std::endl;
    // for(int i = 0; i < 5; i++){
    //     sum += scores[i];
    // }

    // std::cout << "合計点：" << sum << std::endl;
    // int average = sum / 5;
    // std::cout << "平均点：" << average << std::endl;

    return 0;
}