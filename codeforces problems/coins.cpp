#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int dist_x = abs(a);
        int dist_y = abs(b);
        int moves = 0;
        int legs = 1;
        while (dist_x > 0 || dist_y > 0) {
            int jump;
            if (dist_x >= dist_y) {
                jump = min(legs, dist_x);
                dist_x -= jump;
            } else {
                jump = min(legs, dist_y);
                dist_y -= jump;
            }
            legs++;
            moves++;
        }
        cout << moves << endl;
    }
    return 0;
}






