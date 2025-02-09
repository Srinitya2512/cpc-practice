class Solution {
    public:
        double myPow(double x, int n) {
            auto qp = [](double base, long long exp) -> double {
                double res = 1.0; // init res to 1, as anything to the power of 0 is 1
                while (exp > 0) { // iterate until expo becomes 0
                    if (exp & 1) { // if the exp is odd, multiply the current res by the base
                        res *= base;
                    }
                    base *= base; // Square the base
                    exp >>= 1; // right shift exp by 1 (divide the exp by 2)
                }
                return res; // return the final res of base raised to the exp
            };
    
            return n >= 0 ? qp(x, n) : 1.0 / qp(x, -(long long) n);
        }
    };