#include <iostream>
#include <climits>
#include <Windows.h>
const int maxSize = 100; 

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double A[maxSize];

    
    int n;
    std::cout << "Введіть розмір масиву (n): ";
    std::cin >> n;

    
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    
    double sumOfNegatives = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] < 0) {
            sumOfNegatives += A[i];
        }
    }
    std::cout << "Сума від'ємних елементів: " << sumOfNegatives << std::endl;

    
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
    }

    
    double productBetweenMinMax = 1;
    int start, end;
    if (maxIndex < minIndex) {
        start = maxIndex + 1;
        end = minIndex;
    }
    else {
        start = minIndex + 1;
        end = maxIndex;
    }

    for (int i = start; i < end; ++i) {
        productBetweenMinMax *= A[i];
    }
    std::cout << "Добуток елементів масиву між максимальним і мінімальним: " << productBetweenMinMax << std::endl;

    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (A[j] > A[j + 1]) {
                std::swap(A[j], A[j + 1]);
            }
        }
    }

    
    std::cout << "Відсортований масив:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
