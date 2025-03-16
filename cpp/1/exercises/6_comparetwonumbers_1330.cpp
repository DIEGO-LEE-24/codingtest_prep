#include <iostream>
using namespace std;

int main() {
    // 1330: Compare Two Numbers
    // Print '>' if A>B, '<' if A<B, '==' if they are equal.
    int A, B;
    cin >> A >> B;

    if (A > B) cout << ">";
    else if (A < B) cout << "<";
    else cout << "==";

    return 0;
}
