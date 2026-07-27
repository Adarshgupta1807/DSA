class Solution {
public:
    int reverseBits(int n) {
        bitset<32> b(n);
        int i=0;
        int j=b.size()-1;
        while(i<j){
            int temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            i++;
            j--;
        }
        unsigned long num = b.to_ulong(); 
        return num;
    }
};