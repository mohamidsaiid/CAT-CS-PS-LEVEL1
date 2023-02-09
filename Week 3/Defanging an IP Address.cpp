/*
  problem name : Defanging an IP Address
*/
class Solution {
public:
    string defangIPaddr(string address) {
        int p = address.find(".");
        while( p != std::string::npos)
        {
            address.replace(p, 1, "[.]");
            p =address.find(".", p + 3);
        }
        return address;
    }
};
