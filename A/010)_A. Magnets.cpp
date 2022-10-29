#include <iostream>

using namespace std;

int main()
{
  int size,counter=1;
  cin>>size;
 string timp;
  for(int i=0;i<size ;i++){
    string value;
    cin>> value;
    
    if(i==0){timp=value;
        continue;
    }
    if(timp[1]==value[0]){
        counter++;
    }
    timp=value;
  }
  cout<<counter<<endl;
  



}
