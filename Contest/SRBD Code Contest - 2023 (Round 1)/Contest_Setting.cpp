#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int B, y;
        cin >> B >> y;
        
        int m = B / (y*y);
        int N = min(m * 2, 2);
        
        cout << N << endl;
    }
    
    return 0;
}
