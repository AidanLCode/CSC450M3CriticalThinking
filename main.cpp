#include <iostream>
using namespace std;

int main() {


    //Create the pointers to each
    int *firstPointer = new int;
    int *secondPointer = new int;
    int *thirdPointer = new int;

    cout << "Please type a first number and press enter: " << endl;
    cin >> *firstPointer;

    cout << "Thank you! Please type a second number and press enter: " << endl;
    cin >> *secondPointer;

    cout << "Thank you! Finally type a third number and press enter: " << endl;
    cin >> *thirdPointer;

    cout << "The values you entered were stored in pointers. Here is the value of each:\n"
            << "firstPointer: " << *firstPointer << "\n" << "secondPointer: " << *secondPointer << "\n" << "thirdPointer: " << *thirdPointer << endl;

    cout << "Here is the memory address of each pointer:\n" << "firstPointer: "
            << firstPointer << "\n" << "secondPointer: " << secondPointer << "\n" << "thirdPointer: " << thirdPointer;

    //Deallocate the pointers
    delete firstPointer;
    delete secondPointer;
    delete thirdPointer;


    return 0;
}
