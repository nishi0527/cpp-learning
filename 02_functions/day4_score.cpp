#include <iostream>
#include <vector>

// == 基本的な関数の作り方 == //
// void showScores(std::vector<int> scores){
//     for(int i = 0; i < scores.size(); i++){
//         std::cout << "Player" << i + 1 << ": " << scores[i] << std::endl;
//     }
// }

// == 参照(reference)を使った関数の作り方 == //
void showScores(const std::vector<int>& scores){
    for(int i = 0; i < scores.size(); i++){
        std::cout << "Player" << i + 1 << ": " << scores[i] << std::endl;
    }
}

void addScore(std::vector<int>& scores, int score){
    scores.push_back(score);
}

int main(){
    std::vector<int> scores;
    addScore(scores, 1200);
    addScore(scores, 850);
    addScore(scores, 1500);
    showScores(scores);
    std::cout << "score_num: " << scores.size() << std::endl;
    return 0;
}