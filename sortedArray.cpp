#include <iostream>

class SortedArray {
private:
    int arr[20];
    int size;

public:
    SortedArray() : size(0) {}

    bool insert(int value) {
        if (size >= 20) {
            std::cout << "Array is full. Cannot insert new element." << std::endl;
            return false;
        }

        int pos = 0;
        while (pos < size && arr[pos] < value) {
            ++pos;
        }

        for (int i = size; i > pos; --i) {
            arr[i] = arr[i - 1];
        }

        arr[pos] = value;
        ++size;
        return true;
    }

    void printArray() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};