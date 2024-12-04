#include "sortedList.cpp"
#include "sortedArray.cpp"
using namespace std;

int main() {
    SortedList sortedList;
    SortedArray sortedArray;

    int test_array[10] = {89, 23, 21, 123, 4, 56, 56, 56, 98, 67};

    for (int i = 0; i < 10; i++) {
        sortedList.insert(test_array[i]);
        sortedArray.insert(test_array[i]);
    }

    cout << "Sorted List: ";
    sortedList.printList();

    cout << "Sorted Array: ";
    sortedArray.printArray();

    bool isEqual = true;
    for (int i = 0; i < 10; i++) {
        if (sortedList.getValueAt(i) != sortedArray.getValueAt(i)) {
            cout << "Mismatch found at index " << i << ": "
                 << sortedList.getValueAt(i) << " != " << sortedArray.getValueAt(i) << endl;
            isEqual = false;
            break;
        }
    }
    if (isEqual) {
        cout << "The SortedList and SortedArray are identical." << endl;
    }

    return 0;
}