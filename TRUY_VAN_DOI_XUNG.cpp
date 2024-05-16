#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int Q;
    cin >> Q;

    while (Q--) {
        char type;
        cin >> type;
        if (type == 'q') {
            int L, R;
            cin >> L >> R;
            --L; 
            --R; 
            bool isPalindrome = true;
            while (L < R) {
                if (S[L] != S[R]) {
                    isPalindrome = false;
                    break;
                }
                ++L;
                --R;
            }
            if (isPalindrome) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if (type == 'c') {
            int U;
            char x;
            cin >> U >> x;
            --U; 
            S[U] = x;
        }
    }

    return 0;
}

