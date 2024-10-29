#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

void randomnum(int a[], int size) {
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100;

    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    for (int i = 0; i < size; ++i) {
        a[i] = distribution(generator);
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}


void sumArray(int a[], int size, int index, int& count, int& sum) {

    if (index == size) {
        return;
    }


    if (a[index] % 2 != 0) {
        ++count;
        sum += a[index];
    }


    sumArray(a, size, index + 1, count, sum);
}

int main() {
    const int size = 10;
    int a[size];

    randomnum(a, size);

    cout << "Array elements: ";
    printArray(a, size);

    int count = 0, sum = 0;


    sumArray(a, size, 0, count, sum);

    cout << "Number of odd elements: " << count << endl;
    cout << "Sum of odd elements: " << sum << endl;

    return 0;
}