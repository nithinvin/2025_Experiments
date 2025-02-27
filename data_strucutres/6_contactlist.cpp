#include <iostream>
#include <fstream>
#include <list>
#include <sstream>

using namespace std;

int main() {
    list<pair<string, string>> contacts;
    ifstream file("contact_numbers.csv");
    
    if(!file) {
        cout << "Error: unable to open file!" << endl;
        return 1;
    }

    string line, name, phone;

    while (getline(file, line)) {
        stringstream ss(line); 
        getline(ss, name, ','); 
        getline(ss, phone, '\n');
        contacts.push_back(make_pair(name, phone));
    }

    file.close();

    cout << "Contacts List:" << endl;
    for (const auto& contact : contacts) {
        cout << contact.first << " - " << contact.second << endl;
    }

    string cname;
    cout << "Enter the contact name to search: ";
    cin >> cname;

    for (const auto& contact : contacts) {
        if (cname == contact.first) {
            cout << contact.first << " - " << contact.second << endl;
            break;
        }
    }

    return 0;
}
