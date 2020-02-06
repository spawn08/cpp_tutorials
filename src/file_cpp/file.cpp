#include <fstream>
#include <iostream>

using namespace std;



int main() {
    ofstream fs;
    fs.open("text.txt");
    fs << "Hello test file update";
    fs.close();
    return 0;

}