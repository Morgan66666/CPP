#include "stuinfo.hpp"
#include <iostream>

void inputstu(stuinfo stu[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Enter name for student " << (i+1) << ": ";
        std::cin >> stu[i].name;
        double totalScore = 0.0;
        for (int j = 0; j < 3; j++) {
            std::cout << "Enter score " << (j+1) << " for " << stu[i].name << ": ";
            std::cin >> stu[i].score[j];
            totalScore += stu[i].score[j];
        }
        stu[i].ave = totalScore / 3;
    }
}

void showstu(const stuinfo stu[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << stu[i].name << " Scores: ";
        for (int j = 0; j < 3; j++) {
            std::cout << stu[i].score[j] << " ";
        }
        std::cout << "Average: " << stu[i].ave << std::endl;
    }
}
