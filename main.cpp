#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9};

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Numbers: ";

    for (int number : numbers) {
        std::cout << number << " ";
    }

    std::cout << std::endl;

    std::string name = "User";
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}

