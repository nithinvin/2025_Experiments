#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("contact_numbers.csv");
    
    if(!file) {
        cout << "Error: unable to open file!" << endl;
        return 1;
    }
    file.close();

    return 0;
}
