#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string word, message;

    cin >> n >> word;
    cin.ignore();
    getline(cin, message);

    int count = 0;

    for (int i = 0; i < message.length(); i++) {

        bool match = true;
        for (int j = 0; j < word.length(); j++) {
            if (message[i + j] != word[j]) {
                match = false;
            }
        }

        if (match && count < n) {
            for (int j = 0; j < word.length(); j++) {
                cout << "*";
            }
            i += word.length() - 1;
            count++;
        } else {
            cout << message[i];
        }
    }

    cout << endl;

    return 0;
}
