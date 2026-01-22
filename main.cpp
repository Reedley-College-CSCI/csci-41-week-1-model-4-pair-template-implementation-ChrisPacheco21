// Christopher Pacheco
#include "Pair.h"
#include <iostream>
using namespace std;

int main() {
    // Test case
    Pair<int>intConstructor(1, 2);
    Pair<string>stringConstructor("apple", "banana");

    // Displays total sum
    cout << "Total sum: " << intConstructor.getFirst() + intConstructor.getSecond() << endl; // Output: 3
    cout << endl;

    // Displays name of the fruit
    cout << "Fruit #1: " << stringConstructor.getFirst() << endl; //Ouput: apple
    cout << "Fruit #2: " << stringConstructor.getSecond() << endl; //Ouput: banana

    return 0;
}
