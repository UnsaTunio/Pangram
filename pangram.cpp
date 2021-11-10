
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main(){
    cout<<"Enter your string "<<endl;
    string s;
    getline(cin,s);
    int i,flag=0;

    vector<char> v(26);

    for(i=0;i<26;i++){
        v[i]=0;
    }

    for(i=0;i<s.length();i++){
        char t = tolower(s[i]);
        if(t!=' ')
          v[t-'a']++;
    }

    for(i=0;i<26;i++){
        if(v[i]==0) {flag=1; break;}
    }

    if(flag==1) cout<<"FALSE";

    else cout<<"TRUE";

    return 0;
}

