#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
    string gridString;
    cout << "Enter a word:";
    cin >> gridString;
    int emptyLength {1};
    int k {};
    for(int j{0}; j < gridString.length(); j++) {
        for(size_t i{0}; i < (gridString.length()-emptyLength); i++) {
            cout << " ";
        }
        for(size_t i{0}; i <= j; i++) {
            cout << gridString.at(i);
        }
        k = j - 1;
        for(k; k >= 0; k--) {
            cout << gridString.at(k);
        }   
        for(size_t i{0}; i < (gridString.length()-emptyLength); i++) {
            cout << " ";
        }
        emptyLength += 1;
        cout << "\n";
    }
    return 0;
}