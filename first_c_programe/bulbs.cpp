#include <iostream>
#include <string>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main() {
    std::string message;
    std::cout << "Enter your message: ";
    std::getline(std::cin, message);

    int length = message.length();

    for (int i = 0; i < length; i++) {
        char character = message[i];

        // Convert the character to its ASCII decimal value
        int decimal_value = static_cast<int>(character);

        // Convert the decimal value to an 8-bit binary representation
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--) {
            int bit = (decimal_value >> j) & 1;
            print_bulb(bit);
        }

        // Print a space between each character
        std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}

void print_bulb(int bit) {
    if (bit == 0) {
        // Dark emoji
        std::cout << "\u26AB";
    } else if (bit == 1) {
        // Light emoji
        std::cout << "\U0001F7E1";
    }
}
