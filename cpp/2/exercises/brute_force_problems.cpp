// Brute-force Problems in C++

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {

    // ================= Problem 1: Star Printing - 1 (2438) =================
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << '*';
        }
        cout << '\n';
    }

    // ================= Problem 2: Minimum and Maximum (10818) =================
    int N;
    cin >> N;
    vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int min_num = 1000000;
    int max_num = -1000000;

    for (int i = 0; i < N; ++i) {
        if (arr[i] < min_num) min_num = arr[i];
        if (arr[i] > max_num) max_num = arr[i];
    }

    cout << min_num << " " << max_num << '\n';

    // ================= Problem 3: Blackjack (2798) =================
    int M;
    cin >> N >> M;
    arr.resize(N);
    for (int i = 0; i < N; ++i) cin >> arr[i];

    int answer = 0;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= M && sum > answer) answer = sum;
            }
        }
    }
    cout << answer << '\n';

    // ================= Problem 4: A + B (1000) =================
    int a, b;
    cin >> a >> b;
    cout << a + b << '\n';

    // ================= Problem 5: A + B - 3 (10950) =================
    int T;
    cin >> T;
    while (T--) {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    // ================= Problem 6: A + B - 5 (10952) =================
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << a + b << '\n';
    }

    // ================= Problem 7: A + B - 4 (10951) =================
    while (cin >> a >> b) {
        cout << a + b << '\n';
    }

    // ================= Problem 8: Multiplication Table (2739) =================
    int num;
    cin >> num;
    for (int i = 1; i <= 9; ++i) {
        cout << num << " * " << i << " = " << num * i << '\n';
    }

    // ================= Problem 9: Decomposition (2231) =================
    int target;
    cin >> target;
    int result = 0;

    for (int i = 1; i < target; ++i) {
        int sum = i;
        int temp = i;
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == target) {
            result = i;
            break;
        }
    }
    cout << result << '\n';

    // ================= Problem 10: Alphabet Count (10808) =================
    string input;
    cin >> input;

    int count[26] = {0};

    for (char ch : input) {
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        cout << count[i] << ' ';
    }
    cout << '\n';

    return 0;
}
