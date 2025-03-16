#include <iostream>
using namespace std;

int main() {
    // 2884: Alarm Clock
    // Subtract 45 minutes from the given time.
    int H, M;
    cin >> H >> M;

    M -= 45;
    if (M < 0) {
        M += 60;
        H -= 1;
        if (H < 0) H = 23;
    }

    cout << H << " " << M << endl;
    return 0;
}
