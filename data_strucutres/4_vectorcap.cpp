#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr;

    for (int i = 1; i <= 10; i++) {
        arr.push_back(i);
        std::cout << "Size: " << arr.size() << ", Capacity: " << arr.capacity() << std::endl;
    }

    return 0;
}
