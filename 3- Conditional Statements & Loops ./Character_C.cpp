#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    
        char C;
        cin>>C;
        char c=tolower(C);
        switch(c){
            case 'a':     
            case 'e': 
            case'i':
            case 'o':
            case 'u' :
            cout<<"Vowel";
            break;
            default:
            cout<<"Not a vowel";
            
        }
        
        
        return 0;
    }
