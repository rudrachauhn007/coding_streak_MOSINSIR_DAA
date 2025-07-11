#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int Q;
        cin >> Q;
        multiset<int> ms;

        while (Q--) {
            string cmd;
            cin >> cmd;

            if (cmd == "add") {
                int x;
                cin >> x;
                ms.insert(x);
            } 
            else if (cmd == "erase") {
                int x;
                cin >> x;
                auto it = ms.find(x);
                if (it != ms.end())
                    ms.erase(it); // only one occurrence
            } 
            else if (cmd == "eraseall") {
                int x;
                cin >> x;
                ms.erase(x); // all occurrences
            } 
            else if (cmd == "find") {
                int x;
                cin >> x;
                if (ms.find(x) != ms.end())
                    cout << "YES\n";
                else
                    cout << "NO\n";
            } 
            else if (cmd == "count") {
                int x;
                cin >> x;
                cout << ms.count(x) << "\n";
            } 
            else if (cmd == "print") {
                if (ms.empty()) {
                    cout << "\n";
                } else {
                    for (int x : ms)
                        cout << x << " ";
                    cout << "\n";
                }
            } 
            else if (cmd == "empty") {
                ms.clear();
            }
        }
    }

    return 0;
}
