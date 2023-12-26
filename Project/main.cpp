#include <iostream>
#include <ctime>
#include <list>
#include <vector>
#include <cstdlib>
#include <iterator>

using namespace std;


// Функція для заповнення списку випадковими числами.
void fillList(list<int>& lst, int size) {
    for (int i = 0; i < size; ++i) {
        lst.push_back(rand() % size);  // Додавання випадкового числа в кінець списку.
    }
}

// Функція для заповнення вектора випадковими числами.
void fillVector(vector<int>& vec, int size) {
    for (int i = 0; i < size; ++i) {
        vec.push_back(rand() % size);  // Додавання випадкового числа в кінець вектора.
    }
}


// Функція для випадкового доступу до елементів у списку.
void randomAccessList(list<int>& lst, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (int i = 0; i < size; ++i) {
        int index = rand() % size;        // Генерація випадкового індексу.
        auto it = lst.begin();            // Отримання ітератора на початок списку.
        advance(it, index);               // Переміщення ітератора до випадкового індексу.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Random Access List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}

// Функція для випадкового доступу до елементів у векторі.
void randomAccessVector(vector<int>& vec, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (int i = 0; i < size; ++i) {
        int index = rand() % size;        // Генерація випадкового індексу.
        int value = vec[index];           // Отримання значення за випадковим індексом вектора.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Random Access Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}


// Функція для послідовного доступу до елементів у списку.
void sequentialAccessList(list<int>& lst) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (auto it = lst.begin(); it != lst.end(); ++it) {
        int value = *it;  // Отримання значення елемента списку.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Sequential Access List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}

// Функція для послідовного доступу до елементів у векторі.
void sequentialAccessVector(vector<int>& vec) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (int value : vec) {
        int val = value;  // Отримання значення елемента вектора.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Sequential Access Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}


// Функція для вставки елементів на початок списку.
void insertAtBeginningList(list<int>& lst, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (int i = 0; i < size; ++i) {
        lst.push_front(rand() % size);  // Додавання випадкового числа на початок списку.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Insert at Beginning List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}

// Функція для вставки елементів на початок вектора.
void insertAtBeginningVector(vector<int>& vec, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (int i = 0; i < size; ++i) {
        vec.insert(vec.begin(), rand() % size);  // Додавання випадкового числа на початок вектора.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Insert at Beginning Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}


// Функція для вставки елементів в кінець списку.
void insertAtEndList(list<int>& lst, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (int i = 0; i < size; ++i) {
        lst.push_back(rand() % size);  // Додавання випадкового числа в кінець списку.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Insert at End List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}

// Функція для вставки елементів в кінець вектора.
void insertAtEndVector(vector<int>& vec, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    for (int i = 0; i < size; ++i) {
        vec.push_back(rand() % size);  // Додавання випадкового числа в кінець вектора.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Insert at End Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}


// Функція для вставки елементів в середину списку.
void insertAtMiddleList(list<int>& lst, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    auto it = lst.begin();  // Отримання ітератора на початок списку.
    advance(it, size / 2);  // Переміщення ітератора в середину списку.

    for (int i = 0; i < size; ++i) {
        lst.insert(it, rand() % size);  // Додавання випадкового числа в середину списку.
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Insert at Middle List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}

// Функція для вставки елементів в середину вектора.
void insertAtMiddleVector(vector<int>& vec, int size) {
    clock_t start = clock();  // Отримання часу початку операцій.

    int middleIndex = vec.size() / 2;  // Знаходимо індекс середини вектора.

    for (int i = 0; i < size; ++i) {
        if (middleIndex >= 0 && middleIndex <= vec.size()) {  // Перевірка на валідність індексу.
            auto it = vec.begin() + middleIndex;  // Отримання ітератора на потрібний індекс у векторі.
            vec.insert(it, rand() % size);  // Вставка елемента у середину вектора.
            ++middleIndex;  // Збільшення індексу для вставки на одну позицію далі.
        }
        else {
            break;  // Якщо індекс вийшов за межі вектора, припиняємо вставку.
        }
    }

    clock_t end = clock();  // Отримання часу завершення операцій.
    cout << "Insert at Middle Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // Виведення часу виконання.
}


// Точка входу в програму.
int main(int argc, char* argv[])
{
    const int listSize = 100000;  // Розмір списку та вектора.
    const int insertSize = 1000;  // Кількість елементів для вставки.

    list<int> myList;    // Створення списку.
    vector<int> myVector;  // Створення вектора.

    fillList(myList, listSize);    // Заповнення списку випадковими значеннями.
    fillVector(myVector, listSize);  // Заповнення вектора випадковими значеннями.

    // Виклики функцій для вимірювання часу виконання різних операцій.
    randomAccessList(myList, insertSize);  // Випадковий доступ до елементів у списку.
    randomAccessVector(myVector, insertSize);  // Випадковий доступ до елементів у векторі.
    
    sequentialAccessList(myList);  // Послідовний доступ до елементів у списку.
    sequentialAccessVector(myVector);  // Послідовний доступ до елементів у векторі.
    
    insertAtBeginningList(myList, insertSize);  // Вставка на початок списку.
    insertAtBeginningVector(myVector, insertSize);  // Вставка на початок вектора.
    
    insertAtEndList(myList, insertSize);  // Вставка в кінець списку.
    insertAtEndVector(myVector, insertSize);  // Вставка в кінець вектора.
    
    insertAtMiddleList(myList, insertSize);  // Вставка в середину списку.
    insertAtMiddleVector(myVector, insertSize);  // Вставка в середину вектора.

    return EXIT_SUCCESS;
}
