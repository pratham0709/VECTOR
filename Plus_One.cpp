class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        int n = digit.size();
        int carry = 0;
        digit[n-1] = digit[n-1]+1;
        if(digit[n-1]==10){
            carry = 1;
            digit[n-1] = 0;
        }
        for(int i = n-2; i>=0; i--){
            digit[i] =digit[i] + carry;
            
            if(digit[i]==10){
                carry = 1;
                digit[i] = 0;
            }
            else{
                carry = 0;
            }
        }
        if(carry ==1){
            digit.insert(digit.begin(),1);
        }
        return digit;
    }
};
