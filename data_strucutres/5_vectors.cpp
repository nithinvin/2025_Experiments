#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> grades;
    int grade;

    while (true) {
        cout << "Enter grade (type -1 to stop): ";
        cin >> grade;
        if (grade == -1)
            break;  
        grades.push_back(grade);
        cout << "Vector size: " << grades.size() << endl;
        cout << "Vector capacity: " << grades.capacity() << endl;
    }
}
