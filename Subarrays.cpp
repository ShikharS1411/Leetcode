//this is to find all the subarray/string using two loops
for(int i=0;i<s.size();i++){
    for(int j=i;j<s.size();j++){
        //take all the subarrays 
        //use this to find all the substrings,dont use s.substr(i,j);coz thats wrong :/
        string t=s.substr(i,j-i+1);
        // cout<<t<<endl;
    }
}