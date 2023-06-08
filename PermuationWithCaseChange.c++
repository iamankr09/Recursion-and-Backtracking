#include <bits/stdc++.h>
using namespace std;
void  PermuationWithCaseChange(string & s , int idx , string &output ,vector<string> &ans )
{
     if(idx >= s.length()){
         ans.push_back(output);
         return;
     }
     // pick as it is 
      output.push_back(s[idx]);
      PermuationWithCaseChange(s , idx+1 , output , ans);
      
      output.pop_back();
    // pick with changing lettercase
     if(isupper(s[idx])){
         output.push_back(tolower(s[idx]));
     }
     else{
         output.push_back(toupper(s[idx]));
     }
     
     PermuationWithCaseChange(s , idx+1 , output , ans);
     output.pop_back();
     
    
}
vector<string> PermuationWithCaseChange(string &s){
       vector<string> ans;
       string output = "";
       PermuationWithCaseChange(s , 0 , output , ans);
      
       return ans;
       
}
int main()
{
    string s;
    cin>>s;
    vector<string> ans = PermuationWithCaseChange(s);
    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}
