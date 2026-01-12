class Solution {
public:
    string countAndSay(int n) {
        string a = "1";
        while(n > 1)
        {
            int count = 1;
            string newstring = "";
            for(int i = 0; i < a.size(); ++i)
            {
                if(i == a.size() - 1) 
                {
                    newstring = newstring + to_string(count) + a[i];
                    break;
                }
                if(a[i] != a[i + 1])
                {
                    newstring = newstring + to_string(count) + a[i];
                    count = 1;
                }
                else
                {
                    count++;
                }
            }
                a = newstring;
                n--;
        }
        return a;
    }
};