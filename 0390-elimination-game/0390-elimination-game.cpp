class Solution {
public:
    int lastRemaining(int n) {
    int left = 1, right = n, step = 1, remaining = n;
    bool leftToRight = true;
    while (remaining > 1) {
        if (leftToRight || remaining % 2 == 1) {
            left += step;
        }
        right -= step;
        remaining /= 2;
        step *= 2;
        leftToRight = !leftToRight;
    }
    return left;
}

};