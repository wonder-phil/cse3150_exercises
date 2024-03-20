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

    vector<int> rising(given_int-1);

    int indx = 1;
    for_each(rising.begin(), rising.end(), [&indx](int & x) { x = indx++;  });

    for_each(rising.begin(), rising.end(), [](int x) { cout << x << " ";  });
    cout << endl;

    int sum_of_divisors = 0;
    for_each(rising.begin(), rising.end(), [given_int, & sum_of_divisors](int & x) { if (0 == (given_int % x)) sum_of_divisors += x;   });

    cout << "Sum of divosors: " << sum_of_divisors << endl;

    if (sum_of_divisors == given_int) {
        cout << "Perfect" << endl;
    } else {
        cout << "NOT Perfect" << endl;
    }
    

}