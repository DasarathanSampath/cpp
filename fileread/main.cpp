#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc, char **argv) {
    string line;
    ifstream infile("log.log");
    getline(infile, line);
    cout << "the first line is: " << line << endl;
}