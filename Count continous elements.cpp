// 1
// here's the the best way to count number of times the elements(for eg 0) which occurs in a consecutive manner
vector<int>zeros;
int count=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        count++;
        //it willkeep counting till any non 0 element occurs
    }
    //when a non 0 elem occurs it will check this cond and the count would already be having some value from its prev 0 cond,we'll store it and make it to 0
    else if(count){
        zeros.pb(count);
        count=0;
    }
}
if(count)zeros.pb(count);
//edge case
//if all are 0/last element having 0s(conti) u can add a garbage element at the end and make it till <=n so that it would also be coverd :D



// 2
//for lenght
//another method to find conti element counts
    vector<int>a;
    int prev=s[0];//for string make it char prev=s[0];
    int count=0;
    //where s can be any string or array's elem
    //transform acc to req :D 
    for(int i=1;i<n;i++){
        if(prev==s[i])count++;
        else if(prev!=s[i]){
            a.pb(count);
            count=1;
        }
        //update prev
        prev=s[i];
    }
    a.pb(count);//tki last wli conti na choote huehue


// 3
    //compressing 
    int count=1
        for(int i=1;i<n;i++){
        if(s[i]!=s[i-1])count++;
    }
