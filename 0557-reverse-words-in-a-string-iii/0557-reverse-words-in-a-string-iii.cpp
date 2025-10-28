class Solution {
public:
    string reverseWords(string s) {
        int a = s.size();
        int b = 0;
        string x = "";
        string y = "";

        for ( auto u:s ){

            b++;

            if (u != ' ' ){
                x += u ;
            }

            if ( u == ' ' ||  b == a    ) {
            reverse( x.begin() , x.end() );
            y += x ;
            x = "";
            if (b != a ) y += ' ';
        }

        }
        return y;
    }
};