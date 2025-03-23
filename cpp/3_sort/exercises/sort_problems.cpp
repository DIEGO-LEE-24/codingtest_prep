// Problem 1: Number Sorting 2 (Problem 2751) - Method 1
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}

// Problem 1: Number Sorting 2 (Problem 2751) - Method 2 (Using Set for Unique Elements)
#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    cin >> n;

    set<int> numbers;
    while (n--) {
        cin >> num;
        numbers.insert(num);
    }

    for (const auto &num : numbers) {
        cout << num << '\n';
    }

    return 0;
}

// Problem 2: Number Sorting 4 (Problem 11931)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}

// Problem 3: Sort Inside (Problem 1427)
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string n;
    cin >> n;

    sort(n.begin(), n.end(), greater<char>());
    cout << n << '\n';

    return 0;
}

// Problem 4: Word Sorting (Problem 1181)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const string &a, const string &b) {
    if (a.length() == b.length()) return a < b;
    return a.length() < b.length();
}

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), compare);

    words.erase(unique(words.begin(), words.end()), words.end());

    for (const auto &word : words) {
        cout << word << '\n';
    }

    return 0;
}

// Problem 5: Age Sorting (Problem 10814)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Person {
    int age;
    string name;
};

bool compare(const Person &a, const Person &b) {
    return a.age < b.age;
}

int main() {
    int n;
    cin >> n;

    vector<Person> people(n);
    for (int i = 0; i < n; ++i) {
        cin >> people[i].age >> people[i].name;
    }

    stable_sort(people.begin(), people.end(), compare);

    for (const auto &person : people) {
        cout << person.age << ' ' << person.name << '\n';
    }

    return 0;
}

// Problem 10: Asian Information Olympiad (Problem 2535)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Country {
    int nation, student, score;
};

bool compare(const Country &a, const Country &b) {
    return a.score > b.score;
}

int main() {
    int n;
    cin >> n;
    vector<Country> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].nation >> arr[i].student >> arr[i].score;
    }

    sort(arr.begin(), arr.end(), compare);

    int winners = 0, counts[101] = {0};
    for (int i = 0; i < n; i++) {
        if (winners == 3) break;
        if (counts[arr[i].nation] < 2) {
            cout << arr[i].nation << ' ' << arr[i].student << '\n';
            counts[arr[i].nation]++;
            winners++;
        }
    }
    return 0;
}

// Problem 11: National Math Contest (Problem 10825)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student {
    string name;
    int kor, eng, math;
};

bool compare(const Student &a, const Student &b) {
    if (a.kor == b.kor) {
        if (a.eng == b.eng) {
            if (a.math == b.math) return a.name < b.name;
            return a.math > b.math;
        }
        return a.eng < b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].math;
    }

    sort(students.begin(), students.end(), compare);

    for (const auto &student : students) {
        cout << student.name << '\n';
    }

    return 0;
}
