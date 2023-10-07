#include <iostream>
#include <vector>
#include <string>

bool isInAlphabeticalOrder(const std::vector<std::string>& arr) {
    for (size_t i = 0; i < arr.size() - 1; i++) {
        int cmp = arr[i].compare(arr[i + 1]);
        if (cmp > 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of strings in the array: ";
    std::cin >> n;
    
    std::vector<std::string> arr(n);
    std::cout << "Enter the strings:" << std::endl;
    
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    if (isInAlphabeticalOrder(arr)) {
        std::cout << "The array is in alphabetical order." << std::endl;
    } else {
        std::cout << "The array is NOT in alphabetical order." << std::endl;
    }
    
    return 0;
}
