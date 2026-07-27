class Solution {
public:
    int hammingWeight(int n) {
    bitset<32> b(n);
    int count=0;
    for(int i=0;i<b.size();i++){
        if(b[i]==1) count++;
    }
    return count;
    }
};