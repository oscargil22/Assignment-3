// Oscar Gil
// Assignment 8
// Sep 20, 2017


#include <iostream>
using namespace std;

int main(){
    int numInput;   //total number that will be searched through
    int numGuess;   //users guess
    int count = 0;  //will count how many prime numbers are found
    
    //Direct user to enter a number and guess
    cout << "Please enter a number: ";
    cin >> numInput;
    cout << "Guess how many prime numbers there are:  ";
    cin >> numGuess;
    
    //Loop that will find prime numbers
    for (int i=2; i<numInput; i++)  // will run through until input reached
        for (int j=2; j<i; j++)     // will eliminate already found prime numbers with
        {
            if (i % j == 0)         // if mod == 0 then not prime
                break;
            else if (i == j+1){     //
                count++;            //keeps running count of the prime numbers counted
                cout << i << " ";   //Displays what the prime numbers are.
            }
        }
    
    // Output that the guess was right
    if (count == numGuess){
        cout <<endl << "You are correct there are " <<count <<" prime numbers." <<endl;
    }
    
    //Output that the guess was wrong
    else if (count != numGuess){
        cout <<endl << "You are incorrect there are " <<count <<" prime numbers." <<endl;
    }
    
    return 0;
}
