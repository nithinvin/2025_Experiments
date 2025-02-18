#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> grades;
    int grade, max = 0, min = 0, total_grade = 0;

    while (true) {
        cout << "Enter grade (type -1 to stop): ";
        cin >> grade;
        if (grade == -1)
            break;  
        grades.push_back(grade);
        // cout << "Vector size: " << grades.size() << endl;
        // cout << "Vector capacity: " << grades.capacity() << endl;
    }
    max = min = grades[0];
    for (auto it = grades.begin(); it != grades.end(); ++it){
        cout << *it << " ";
        if (max < *it)
            max = *it;
        if (min > *it)
            min = *it;
        total_grade += *it;
    }
    cout << "Largest grade is " << max << " and smallest grade is " << min << endl;
    cout << "Average grade is " << total_grade/grades.size();
    cout << endl;
}
