//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int one=0;
        int zero=0;
        int ans=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                zero++;
            }
            else one++;
            if(zero==one){
                zero=0;
                one=0;
                ans++;
            }
        }
        if(zero!=0 || one!=0){
            return -1;
        }
        else if(ans==0){
            return -1;
        }
        else return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends