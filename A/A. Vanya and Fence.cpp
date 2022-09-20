
#include <iostream>

using namespace std;

int main()
{
    
    int a ,b;
    cin>>a>>b;
    int arr[a];
    int sum=0;
    for (int i=0;i<a;i++) {
        cin>>arr[i];
          if(arr[i]>b){sum+=2;}
          else{sum++;}
    }
    cout<<sum;
    
}
