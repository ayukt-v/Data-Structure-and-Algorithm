#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int small, big, goal;
    cin >> small >> big >> goal;

    // 1. Find out how many big bars we can actually use
    int big_used = min(big, goal / 5);
    
    // 2. See how much weight is left over
    int remaining = goal - (big_used * 5);
    
    // 3. If we have enough small bars to cover the rest, print it. Otherwise, print -1.
    if (remaining <= small) {
        cout << remaining;
    } else {
        cout << -1;
    }

    return 0;
}
