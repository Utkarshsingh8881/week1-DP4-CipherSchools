class Solution {
public:
    double findP(double x, long long n) {
        // Base Case
        if (n == 0) {
            return 1;
        }
 
        if (n == 1) {
            return x;
        }
 
        // Recursive step
        // double answer = x * findP(x, n - 1);
 
        double answer = findP(x, n / 2);
        answer = answer * answer; // power became n here
        if (n % 2 == 1) {
            answer = answer * x;
        }
 
        // What to return
        return answer;
    }
 
    double myPow(double x, int n) {
        if (n >= 0) return findP(x, n);

        cout << "Good till now" << endl;
        return 1.0 / findP(x, abs(n));
    }
};
