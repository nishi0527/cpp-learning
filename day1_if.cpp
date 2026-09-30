#include <iostream>
#include <random>



int main(){
    int number;
    std::cin >> number;

    if( number > 50){
        std::cout << "50より大きいです" << std::endl;
    }

    else if(number == 50){
        std::cout << "50です" << std::endl;
    }

    else{
        std::cout << "50より小さいです" << std::endl;
    }
}