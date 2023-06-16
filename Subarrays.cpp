//this is to find all the subarray/string using two loops
// 1->for sub strings
for(int i=0;i<s.size();i++){
    for(int j=i;j<s.size();j++){
        //take all the subarrays 
        //use this to find all the substrings,dont use s.substr(i,j);coz thats wrong :/
        string t=s.substr(i,j-i+1);
        // cout<<t<<endl;
    }
}
// 2-.for subarrays,have to use 3 loops
for(int i=0;i<a.size();i++){
    for(int j=i;j<a.size();j++){
        vector<int>temp;
        for(int k=i;k<=j;k++){
            cout<<a[k]<<" ";
            temp.pb(a[k]);
        }
    }
}
