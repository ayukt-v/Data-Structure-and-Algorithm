#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, y1, x2, y2, px, py;
    cin >> x1 >> y1 >> x2 >> y2 >> px >> py;

    // One-line check using inline min and max
    if (px >= min(x1, x2) && px <= max(x1, x2) && py >= min(y1, y2) && py <= max(y1, y2))
        cout << "Yes";
    else
        cout << "No";
}
