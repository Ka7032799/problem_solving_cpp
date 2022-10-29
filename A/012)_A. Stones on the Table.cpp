#include <iostream>

using namespace std;

int main()
{
 int size ;
 cin>>size;
 
 string a;
 cin>>a;
 
char temp=a[0];
int counter=0;
for(int i=1;i<a.size();i++){

    if(a[i]==temp){counter++;}
    temp=a[i];
    
    
}
cout<<counter<<endl;


}
