#include <iostream>
#include <cctype>

using namespace std;

string encrypt(string plaintext, int key) {
    string ciphertext = "";

    for (char& c : plaintext) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            ciphertext += static_cast<char>((c - base + key) % 26 + base);
        } else {
            ciphertext += c;
        }
    }

    return ciphertext;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " key" << endl;
        return 1;
    }

    int key = atoi(argv[1]);

    if (key < 0) {
        cerr << "Key must be a non-negative integer." << endl;
        return 1;
    }

    cout << "plaintext: ";
    string plaintext;
    getline(cin, plaintext);

    string ciphertext = encrypt(plaintext, key);

    cout << "ciphertext: " << ciphertext << endl;

    return 0;
}
