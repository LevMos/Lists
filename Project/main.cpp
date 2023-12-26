#include <iostream>
#include <ctime>
#include <list>
#include <vector>
#include <cstdlib>
#include <iterator>

using namespace std;


// ������� ��� ���������� ������ ����������� �������.
void fillList(list<int>& lst, int size) {
    for (int i = 0; i < size; ++i) {
        lst.push_back(rand() % size);  // ��������� ����������� ����� � ����� ������.
    }
}

// ������� ��� ���������� ������� ����������� �������.
void fillVector(vector<int>& vec, int size) {
    for (int i = 0; i < size; ++i) {
        vec.push_back(rand() % size);  // ��������� ����������� ����� � ����� �������.
    }
}


// ������� ��� ����������� ������� �� �������� � ������.
void randomAccessList(list<int>& lst, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (int i = 0; i < size; ++i) {
        int index = rand() % size;        // ��������� ����������� �������.
        auto it = lst.begin();            // ��������� ��������� �� ������� ������.
        advance(it, index);               // ���������� ��������� �� ����������� �������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Random Access List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}

// ������� ��� ����������� ������� �� �������� � ������.
void randomAccessVector(vector<int>& vec, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (int i = 0; i < size; ++i) {
        int index = rand() % size;        // ��������� ����������� �������.
        int value = vec[index];           // ��������� �������� �� ���������� �������� �������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Random Access Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}


// ������� ��� ����������� ������� �� �������� � ������.
void sequentialAccessList(list<int>& lst) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (auto it = lst.begin(); it != lst.end(); ++it) {
        int value = *it;  // ��������� �������� �������� ������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Sequential Access List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}

// ������� ��� ����������� ������� �� �������� � ������.
void sequentialAccessVector(vector<int>& vec) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (int value : vec) {
        int val = value;  // ��������� �������� �������� �������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Sequential Access Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}


// ������� ��� ������� �������� �� ������� ������.
void insertAtBeginningList(list<int>& lst, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (int i = 0; i < size; ++i) {
        lst.push_front(rand() % size);  // ��������� ����������� ����� �� ������� ������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Insert at Beginning List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}

// ������� ��� ������� �������� �� ������� �������.
void insertAtBeginningVector(vector<int>& vec, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (int i = 0; i < size; ++i) {
        vec.insert(vec.begin(), rand() % size);  // ��������� ����������� ����� �� ������� �������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Insert at Beginning Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}


// ������� ��� ������� �������� � ����� ������.
void insertAtEndList(list<int>& lst, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (int i = 0; i < size; ++i) {
        lst.push_back(rand() % size);  // ��������� ����������� ����� � ����� ������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Insert at End List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}

// ������� ��� ������� �������� � ����� �������.
void insertAtEndVector(vector<int>& vec, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    for (int i = 0; i < size; ++i) {
        vec.push_back(rand() % size);  // ��������� ����������� ����� � ����� �������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Insert at End Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}


// ������� ��� ������� �������� � �������� ������.
void insertAtMiddleList(list<int>& lst, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    auto it = lst.begin();  // ��������� ��������� �� ������� ������.
    advance(it, size / 2);  // ���������� ��������� � �������� ������.

    for (int i = 0; i < size; ++i) {
        lst.insert(it, rand() % size);  // ��������� ����������� ����� � �������� ������.
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Insert at Middle List: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}

// ������� ��� ������� �������� � �������� �������.
void insertAtMiddleVector(vector<int>& vec, int size) {
    clock_t start = clock();  // ��������� ���� ������� ��������.

    int middleIndex = vec.size() / 2;  // ��������� ������ �������� �������.

    for (int i = 0; i < size; ++i) {
        if (middleIndex >= 0 && middleIndex <= vec.size()) {  // �������� �� �������� �������.
            auto it = vec.begin() + middleIndex;  // ��������� ��������� �� �������� ������ � ������.
            vec.insert(it, rand() % size);  // ������� �������� � �������� �������.
            ++middleIndex;  // ��������� ������� ��� ������� �� ���� ������� ���.
        }
        else {
            break;  // ���� ������ ������ �� ��� �������, ���������� �������.
        }
    }

    clock_t end = clock();  // ��������� ���� ���������� ��������.
    cout << "Insert at Middle Vector: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;  // ��������� ���� ���������.
}


// ����� ����� � ��������.
int main(int argc, char* argv[])
{
    const int listSize = 100000;  // ����� ������ �� �������.
    const int insertSize = 1000;  // ʳ������ �������� ��� �������.

    list<int> myList;    // ��������� ������.
    vector<int> myVector;  // ��������� �������.

    fillList(myList, listSize);    // ���������� ������ ����������� ����������.
    fillVector(myVector, listSize);  // ���������� ������� ����������� ����������.

    // ������� ������� ��� ���������� ���� ��������� ����� ��������.
    randomAccessList(myList, insertSize);  // ���������� ������ �� �������� � ������.
    randomAccessVector(myVector, insertSize);  // ���������� ������ �� �������� � ������.
    
    sequentialAccessList(myList);  // ���������� ������ �� �������� � ������.
    sequentialAccessVector(myVector);  // ���������� ������ �� �������� � ������.
    
    insertAtBeginningList(myList, insertSize);  // ������� �� ������� ������.
    insertAtBeginningVector(myVector, insertSize);  // ������� �� ������� �������.
    
    insertAtEndList(myList, insertSize);  // ������� � ����� ������.
    insertAtEndVector(myVector, insertSize);  // ������� � ����� �������.
    
    insertAtMiddleList(myList, insertSize);  // ������� � �������� ������.
    insertAtMiddleVector(myVector, insertSize);  // ������� � �������� �������.

    return EXIT_SUCCESS;
}
