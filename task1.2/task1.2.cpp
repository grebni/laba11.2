#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int maxSize = 100; 
    int A[maxSize];

    
    int n;
    std::cout << "Введіть розмір масиву (n): ";
    std::cin >> n;

    
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    
    int currentElement = A[0];
    int currentStreak = 1;
    int maxStreak = 1;

    for (int i = 1; i < n; ++i) {
        if (A[i] == currentElement) {
            
            ++currentStreak;
        }
        else {
            
            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
            
            currentElement = A[i];
            currentStreak = 1;
        }
    }

    
    if (currentStreak > maxStreak) {
        maxStreak = currentStreak;
    }

    std::cout << "Найбільша кількість підряд розміщених однакових елементів: " << maxStreak << std::endl;

    return 0;
}
