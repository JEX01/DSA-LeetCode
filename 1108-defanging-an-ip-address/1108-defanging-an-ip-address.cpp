class Solution {
public:
    string defangIPaddr(string address) {
        string defanged(address.length()+6, '\0');
        int j=0;
        for (int i=0; i<address.length(); i++){
            if (address[i]=='.'){
                defanged[j]= '[';
                defanged[++j]= '.';
                defanged[++j]= ']';
            }
            else{
                defanged[j]= address[i];
            }
            j++;
        }
        return defanged;

    }
};