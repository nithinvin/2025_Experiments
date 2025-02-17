#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;

    arr.reserve(128);
    for (int i = 1; i <= 150; i++) {
        arr.push_back(i);
        std::cout << "Size: " << arr.size() << ", Capacity: " << arr.capacity() << std::endl;
    }

    return 0;
}
