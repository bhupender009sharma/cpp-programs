#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line,a,b,c;
    cin>>line;
    int i,mark=0;

    int n= line.length();
    char s[n+1];
    strcpy(s,line.c_str());

    for(i=0;i<n+1;i++){
        cout<<s[i];
    }
    cout<<endl;
    for(i=0;s[i]!='\0';i++){

        if(s[i]==' '){
            mark++;
            continue;
        }
        if(mark==0){
            a[i]= s[i];
            }else if(mark==1){
                b[i-a.size()]=s[i];
                }else{
                c[i-(a.size()+b.size())]=s[i];}


    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}
