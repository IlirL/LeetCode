class Solution {
public:
    int countDigits(int num) {
    if (num == 0) return 1;
    return static_cast<int>(log10(abs(num))) + 1;
}
    int countSymmetricIntegers(int low, int high) {
        int total = 0;
        while(high>=low)
        {
            int nDigits = this->countDigits(low);
            if(nDigits%2)
            {
                low = pow(10, nDigits);
            } else{
                int differenceSum = 0;
                int copyLow = low;
                for(int i = nDigits; i>nDigits/2; i--)
                {
                    differenceSum += copyLow%10;
                    copyLow/=10;
                }
                for(int i = nDigits/2; i>0; i--)
                {
                    differenceSum -= copyLow%10;
                    copyLow/=10;
                }
                low++;
                if(differenceSum == 0)
                    total++;
            }
        }
        return total;
    }
};