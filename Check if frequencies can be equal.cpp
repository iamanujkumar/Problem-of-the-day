class Solution{
public:	
	bool sameFreq(string s)
	{
	    unordered_map<char,int> mp;
	    for(int i=0;i<s.size();i++){
	        mp[s[i]]++;
	    }
	    int mn=INT_MAX,mx=INT_MIN,mxCount=0,mnCount=0;
	    for(auto it:mp){
	        mn=min(mn,it.second);
	        mx=max(mx,it.second);
	    }
	    for(auto it:mp){
	        if(it.second==mx)mxCount++;
	        else if(it.second==mn)mnCount++;
	    }
	    if(mn==mx or (mn==mx-1 and mxCount==1))return true;
	    if(mnCount==1 and mn==1 and mxCount+mnCount==mp.size())return true;
	    return false;
	}
};