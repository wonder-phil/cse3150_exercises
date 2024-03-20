#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

auto is_perfect = [](int number) -> bool {
    int sum = 1;
    for (int i = 2; i < number -1; i++) {
        if (0 == number % i) {
            sum += i;
        }
    }

    return sum == number;
};

int main() {
    string line;
    int given_int;

    cout << "Enter an integer: ";
    cin >> line;

    given_int = stoi(line);

    if (is_perfect(given_int)) {
        cout << "Perfect!" << endl;
    } else {
        cout << "Imperfect!" << endl;
    }

}