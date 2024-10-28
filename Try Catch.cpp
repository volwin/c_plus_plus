#include <iostream>
#include <cstring>
#include <climits>
#include <cstdlib>

using namespace std;

int main() {
    char n_str[32], t_str[128];
    long n, t;
    int k1 = 0, k2 = 0;
    if (scanf("%31s%127s", n_str, t_str) != 2) {
        cerr << "Input error! Please enter correct values." << endl;
        return 1;
    }
    errno = 0;
    n = strtol(n_str, NULL, 10);
    if ((errno == ERANGE && (n == LONG_MAX || n == LONG_MIN))
            || (n < INT_MIN || n > INT_MAX)) {
        cerr << "Value of n exceeds the range of int." << endl;
        return 1;
    }
    if (n % 2 != 0) {
        cout << "N must be an even number :(" << endl;
        return 1;
    }

    int len_t = strlen(t_str);
    if (len_t != n) {
        cerr << "The length of the ticket number must match n." << endl;
        return 1;
    }

    int d = n / 2;
    for (int i = 0; i < d; ++i) {
        k1 += t_str[i] - '0';
    }
    for (int i = d; i < n; ++i) {
        k2 += t_str[i] - '0';
    }

    if (k1 == k2) {
        cout << "Your ticket is lucky :D" << endl;
    } else {
        cout << "Unlucky." << endl;
    }

    return 0;
}
