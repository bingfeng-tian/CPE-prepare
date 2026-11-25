// 612 測試已放棄

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct DNA {
    string str;
    long long inv;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M;
    while (cin >> M) {
        while (M-- > 0) {
            int n, m;
            if (!(cin >> n >> m)) break;

            vector<DNA> list;
            list.reserve(m > 0 ? m : 0);

            for (int i = 0; i < m; i++) {
                string s;
                if (!(cin >> s)) break;

                long long inv = 0;
                int len = (int)s.size();
                for (int j = 0; j < len; j++) {
                    for (int k = j + 1; k < len; k++) {
                        if (s[j] > s[k]) inv++;
                    }
                }
                list.push_back({s, inv});
            }

            stable_sort(list.begin(), list.end(), [](const DNA &a, const DNA &b) {
                return a.inv < b.inv;
            });

            for (const auto &item : list) {
                cout << item.str << "\n";
            }
            if (M > 0) cout << "\n";
        }
    }
    return 0;
}