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
//edge case
//if all are 0/last element having 0s(conti) u can add a garbage element at the end and make it till <=n so that it would also be coverd :D