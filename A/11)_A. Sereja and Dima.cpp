#include <iostream>

using namespace std;

int main()
{
  

  
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size ;i++){
    cin>>arr[i];  
  }

   
    bool tern=1; //1 for 1  0 for 2
    int player1=0,player2=0;
    
     int i=0,z=size-1;
    while(i<=z){
        if(arr[i]>=arr[z]){
            if(tern){
                player1+=arr[i];
            }
            else{
                player2+=arr[i];
            }
       i++;
       
        }
        else if(arr[i]<arr[z]){
            
            if(tern){ 
                player1+=arr[z];
            }
            else{
                player2+=arr[z];
            }
             z--;
        }
        if(tern){
            tern=0;
            
        }else{tern=1;}
        
        
        
    }
    
    
    cout<<player1<<' '<<player2;
    
    
}
