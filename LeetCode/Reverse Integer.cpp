class Solution {
public:
    int reverse(int x) {
        long long answer = 0;
        while (x != 0)
        {
            answer = answer * 10 + x % 10;
            x /= 10;
        }
        if (answer >= 2147483647 || answer <= -2147483647)
            return 0;
        return answer;
    }
};