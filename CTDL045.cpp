#include<bits/stdc++.h>

using namespace std;

// cach nay se sap xep cac tu co tan suat lon  nhat vao 1 xau khac de kiem tra
// vi du a = 4, b  = 3, c = 2 thi co k = abcabcab

bool check(string s) {
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'a']++;
    }

    vector<pair<int, char>> freq;
    for (char c = 'a'; c <= 'z'; c++) {
        if (count[c - 'a'] > 0) {
            freq.push_back({count[c - 'a'], c});
        }
    }

    // Sort characters by frequency
    sort(freq.begin(), freq.end(), greater<>());

    string result = "";
    while (!freq.empty()) {
        bool found = false;
        for (int i = 0; i < freq.size(); i++) {
            if (result.empty() || freq[i].second != result.back()) {
                found = true;
                result += freq[i].second;
                if (--freq[i].first == 0) {
                    freq.erase(freq.begin() + i);
                }
                break;
            }
        }
        if (!found) return false;  // If no suitable character is found, return false

        // Sort again after updating
        sort(freq.begin(), freq.end(), greater<>());
    }

    return result.size() == s.size();
}

int main() {
	int t; cin >> t;
	while(t--)
	{
		
	
    string s; cin >> s;
    bool ans = check(s);
    cout << (ans ? 1 : -1) << endl;
    }
    return 0;
}
