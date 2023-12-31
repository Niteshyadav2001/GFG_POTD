//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> mp;
        int maxi = INT_MIN;
        vector<string> result;
        for(int i = 0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]] > maxi)
            {
                result.clear();
                maxi = mp[arr[i]];
                result.push_back(arr[i]);
            }
            else if(mp[arr[i]] == maxi)
            {
                result.push_back(arr[i]);
            }
        }
        //check whether two strings occurs with same number of time.
        vector<string> ans;
        sort(result.begin() , result.end());
        ans.push_back(result[0]);
        ans.push_back(to_string(mp[result[0]]));
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends