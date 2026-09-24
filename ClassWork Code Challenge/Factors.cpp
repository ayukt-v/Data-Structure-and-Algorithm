# include <iostream>
using namespace std;
int main(){

    // Take a whole number N as an integer input and print all the factors of it such that each factor should be printed in a separate line.


 int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i;
             cout<<endl;
        }
      
    }
    
    return 0;
}




