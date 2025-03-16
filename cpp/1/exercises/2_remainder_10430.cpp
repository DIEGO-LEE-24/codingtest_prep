#include <iostream>
using namespace std;

int main() {
    // 10430: Remainder
    // Given A, B, C, compute the expressions involving modulo.
    int A, B, C;
    cin >> A >> B >> C;

    cout << (A + B) % C << endl;
    cout << ((A % C) + (B % C)) % C << endl;
    cout << (A * B) % C << endl;
    cout << ((A % C) * (B % C)) % C << endl;

    return 0;
}
