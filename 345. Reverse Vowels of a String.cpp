class Solution {
public:
//1st approach using two pointers

bool isvowel(char ch){
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') return true;
    return false;
}
string reverseVowels(string s) {
    int n=s.size();
    int i=0,j=n-1;//two pointer approach
    while(i<j){
        //all cond->TT,TF,FT,FF
        if(isvowel(s[i])==true&&isvowel(s[j])==true){
            swap(s[i],s[j]);
            i++,j--;
        }
        else if(isvowel(s[i])==true&&isvowel(s[j])==false)j--;
        else if(isvowel(s[i])==false&&isvowel(s[j])==true)i++;
        else i++,j--;//when both conditions are ==false
    }
    return s;
};
class Solution {
public:
//2nd approach->using stacks

bool isvowel(char ch){  if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U') return true;
    return false;
}
string reverseVowels(string s) {
    //2nd approach->using stacks
    //insert vowels in stack acc to their appreance
    stack<char>st;
    for(auto x:s){
        //as stack follows lifo order
        if(isvowel(x)==true)st.push(x);
    }
    //inorder to  transform within the string use reference variable
    for(auto& x:s){
        if(isvowel(x)==true){
            swap(x,st.top());
            st.pop();
        }
    }
    return s;
}
};