class Solution {
public:
    int maxProfit(vector<int>& price) {
        int p=0;
        int l=price[0];
        for(int i=1;i<price.size();i++){
            if(l>price[i]){
                l=price[i];
            }
            else p=max(p,price[i]-l);
        }
        return p;
    }
};