#include "stuinfo.hpp"
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;
    stuinfo* students = new stuinfo[n];

    inputstu(students, n);
    showstu(students, n);

    delete[] students;
    return 0;
}
