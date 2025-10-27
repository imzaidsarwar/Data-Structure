class Solution {
public:
    int getSum(int a, int b) {
        
        while (b != 0)
        {

            if(b > 0)
            {
                
                a++;
                b--;
            }

            else
            {
                a--;
                b++;
            }
        }
        
        return a;
    }
};