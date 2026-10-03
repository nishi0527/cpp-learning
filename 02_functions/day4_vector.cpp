#include <iostream>
#include <vector>

int main(){
    // std::vector<int> numbers = {10, 20, 30};
    // numbers.push_back(40); // 末尾に追加するための機能
    // numbers.push_back(50);
    // numbers.push_back(60);
    // // _.size()はそのvectorの要素数を返す機能
    // for(int i = 0; i < numbers.size(); i++){
    //     std::cout << numbers[i] << std::endl;
    // }

    std::vector<int> numbers = {10, 20, 30 ,40, 50};
    numbers.pop_back();
    numbers.pop_back();
    std::cout << "要素数：" << numbers.size() << std::endl;
    for(int i=0; i<numbers.size(); i++){
        std::cout << numbers[i] << std::endl;
    }
    return 0;
}