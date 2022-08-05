#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printNumbers(vector<int>&);
void addNumbers(vector<int>&);

int main () {
    vector<int> numbers{};
    char selection{};
    do {
        cout << "\nP-Print Numbers" << endl;
        cout << "\nA-Add a Number" << endl;
        cout << "\nD-Display mean of the Numbers" << endl;
        cout << "\nS-Display smallest Number" << endl;
        cout << "\nL-Display Largest Number" << endl;
        cout << "\nQ-Quit" << endl;
        cout << "\nEnter your choice:";
        cin >> selection;
        if(selection == 'P' || selection == 'p'){
            printNumbers(numbers);
        }else if(selection == 'A' || selection == 'a'){
            addNumbers(numbers);
        } 
    } while(selection != 'q' && selection != 'Q');    
    cout << "\nThanks See you again!!: " << selection;
    return 0;
}

void printNumbers(vector<int> &numbers){
    if(numbers.size() == 0)
        cout << "[] - The list is empty";
    else{
        cout << "[";
        for(auto number: numbers)
            cout << number << " ";
        cout << "]" << endl;
    }
}

void addNumbers(vector<int> &numbers){
    int numToAdd;
    cout << "Enter the number to add to the list: ";
    cin >> numToAdd;
    numbers.push_back(numToAdd);
    cout << numToAdd << " is added to the list." << endl;
}