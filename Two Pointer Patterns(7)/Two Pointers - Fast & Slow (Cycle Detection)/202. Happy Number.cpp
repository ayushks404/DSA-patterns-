// class Solution {

// private:

//  int getval(int n){
//     int out = 0;

//     while(n>0){
//         int r= n%10;
//         out += r*r;
//         n = n/10;
//     }

//     return out;
//  }

// public:

//     bool isHappy(int n) {

//         unordered_set<int> s;

//         while(s.find(n) == s.end()){

//             s.insert(n);
//             n = getval(n);

//             if(n == 1){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

class Solution
{

private:
    int getval(int n)
    {
        int out = 0;

        while (n > 0)
        {
            int r = n % 10;
            out += r * r;
            n = n / 10;
        }

        return out;
    }

public:
    bool isHappy(int n)
    {

        int slow = n;
        int fast = n;
        do
        {

            slow = getval(slow);
            fast = getval(getval(fast));
        } while (slow != fast);

        return slow == 1;
    }
};