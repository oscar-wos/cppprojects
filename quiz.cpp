#include <iostream>

int main() {
    std::string questions[] = {
        "What is the capital of United Kingdom?",
        "What is the capital of France?",
        "What is the capital of Germany?"
    };

    std::string options[][4] = {
        {"A: London", "B: Paris", "C: Monocco", "D: Rome"},
        {"A: Lyon", "B: London", "C: Berlin", "D: Paris"},
        {"A: Berlin", "B: Paris", "C: Amsterdam", "D: Rome"}
    };

    char correctAnswers[] = {'A', 'D', 'A'};
    int score;

    for (int i = 0; i < sizeof(questions) / sizeof(std::string); i++) {
        std::cout << questions[i] << std::endl;

        for (int j = 0; j < sizeof(options[0]) / sizeof(options[0][0]); j++) {
            std::cout << options[i][j] << std::endl;
        }

        char answer;
        std::cin >> answer;

        if (answer == correctAnswers[i]) {
            score++;
            std::cout << "Correct!" << std::endl;
        } else {
            std::cout << "Wrong!" << std::endl;
        }
    }

    std::cout << "Your score is " << score << " out of " << sizeof(questions) / sizeof(std::string) << std::endl;

    return 0;
}