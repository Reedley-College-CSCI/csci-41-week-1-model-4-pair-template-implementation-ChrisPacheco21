// Christopher Pacheco
#include "Pair.h"
#include <iostream>
using namespace std;

int main() {
    // Test case
    Pair<int>ConstructorNumber(1, 2);
    Pair<string>ConstructorName("apple", "banana");

    // Displays total sum
    cout << "Total sum: " << ConstructorNumber.getFirst() + ConstructorNumber.getSecond() << endl; // Output: 3
    cout << endl;

    // Displays name of the fruit
    cout << "Fruit #1: " << ConstructorName.getFirst() << endl; //Ouput: apple
    cout << "Fruit #2: " << ConstructorName.getSecond() << endl; //Ouput: banana

    return 0;
}
