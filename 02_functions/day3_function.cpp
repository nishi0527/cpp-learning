#include <iostream>

void printNumber(int n){
    for(int i = 1; i < n + 1; i++){
        std::cout << i << std::endl;
    }
}

int add(int a, int b){
    return a + b;
}

int getMax(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    //printNumber(5);

    int answer = add(10, 20);
    std::cout << answer << std::endl;

    return 0;
}