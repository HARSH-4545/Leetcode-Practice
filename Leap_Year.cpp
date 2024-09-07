class Solution {
public:
    int reverse(int x) {
        int num=0, rem;
        while(x){
            rem= x%10;
            x/=10;
            num=num*10+rem;
        }
        return num;
    }
};
