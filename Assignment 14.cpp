//
//  Oscar Gil
//  Assignment 14 Factorial/Fibonacci
//
//

#include <iostream>
#include <vector>
using namespace std;
int factorial(int n);
int fib(int n);


int main(){
    int n;
    int choice;
    cout << "Please select a number"<<endl <<"1: Factorial" <<endl <<"2: Fibonacci"
    <<endl <<"Choice: ";
    cin >> choice;
    
    if (choice == 1){
    cout << "Please enter a number: ";
    cin >> n;
    
        cout << "Factorial of "<<n <<" is: " <<factorial(n) <<endl;
    }
    
    
    else if (choice ==2){
        cout << "Please enter a number: ";
        cin >> n;
        
        cout <<"The number in the #" <<n <<" is: "<<fib(n) <<endl;
    }
    
    
    else{
        cout << "Error: Invalid Input" <<endl;
        return 1;
    }
    
    
    return 0;
}


int factorial(int num){
    int temp;
    
    if(num <= 1) return 1;
    
    temp = num * factorial(num - 1);
    return temp;

}



int fib(int n){
    if (n <= 2){
        

        
        return 1;}
    else
        

    return fib(n-1) + fib(n-2);
}







