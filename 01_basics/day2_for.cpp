#include <iostream>

int main(){
    int sum = 0;

    for(int i = 1; i < 101; i++){
        sum += i;
    }

    std::cout << "1から100までの合計は" << sum << "です" << std::endl;

    sum = 0;

    for(int i = 1; i < 101; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    std::cout << "1から100までの偶数の合計は" << sum << "です" << std::endl;

    //  == FizzBuzz == //
    for (int i = 1; i < 101; i++){
        if(i % 3 == 0 && i % 5 == 0){
            std::cout << "FizzBuzz" << std::endl;
        }

        else if(i % 3 == 0){
            std::cout << "Fizz" << std::endl;
        }

        else if(i % 5 == 0){
            std::cout << "Buzz" << std::endl;
        }

        else{
            std::cout << i << std::endl;
        }
    }
    
    return 0;
}