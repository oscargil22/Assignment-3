//
//  Oscar Gil
//  Assignment 5
//

#include <iostream>
using namespace std;

int main(){
    
    int num;
    char letchoice;
    
    cout<< "If you would like to quit enter 'Q'. If you would like to continue enter any letter: ";
    cin >> letchoice;
    
    
    if( letchoice == 'q'|| letchoice =='Q'){
        return 0;
    }

    
    while(letchoice != 'q' || letchoice != 'Q')
    {
    cout << "Please enter a number to be determined if it's positive or negative: ";
    cin >> num;

   
    if ( (num % 2) == 0){
        cout <<"The number '"<<num<<"' is even." <<endl <<endl;
        
    }
    else (cout << "The number '"<<num<<"' is odd." <<endl <<endl);
        
    
        cout<< "If you would like to quit enter 'Q'. If you would like to continue enter any letter: ";
        cin >> letchoice;

        if( letchoice == 'q'|| letchoice =='Q'){
            return 0;
        }
        
    }
   
    
    

    return 0;
}
