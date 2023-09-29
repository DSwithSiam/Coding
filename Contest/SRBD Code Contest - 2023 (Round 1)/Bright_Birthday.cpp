
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int count_achievable_colors(string s) {
    vector<string> color_set = {"blue", "green", "yellow", "red", "purple", "orange", "pink", 
                                "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};

    unordered_map<char, int> char_freq;
    for (char c : s) {
        char_freq[c]++;
    }

    int achievable_colors = 0;

    for (string color : color_set) {
        bool can_create = true;
        for (char c : color) {
            if (char_freq.find(c) != char_freq.end() && char_freq[c] > 0) {
                char_freq[c]--;
            } else {
                can_create = false;
                break;
            }
        }

        if (can_create) {
            achievable_colors++;
        }
    }

    return achievable_colors;
}

int main() {
    int num_test_cases;
    cin >> num_test_cases;

    for (int i = 0; i < num_test_cases; i++) {
        string test_case;
        cin >> test_case;
        int result = count_achievable_colors(test_case);
        cout << result << endl;
    }

    return 0;
}
