#include <iostream>
using namespace std;

int main()
{
    
    
    int a;
    string b;
    cin>>a>>b;
    int A=0,D=0;
    for (int i=0;i<b.size();i++) {
        if(b[i]=='A')A++;
        else D++;
    }
    if(A>D)cout<<"Anton";
    else if(D>A)cout<<"Danik";
    else cout<<"Friendship";

}
