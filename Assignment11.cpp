//
//  Oscar Gil
//  Assignment 11 & 12

#include <iostream>
#include <chrono>

using namespace std;
using  ns = chrono::nanoseconds;
using get_time = chrono::steady_clock ;

int GCD(int in1, int in2); //Function Prototype

int main(){
    int num1;           //number input by user
    int num2;           //number input by user
    int minNum = 1;     //Assigned smallest number
    int maxNum = 1;     //Assigned biggest number
    int gcd = 1;        //Variable that will display GCD
    
    
    //Prompt User for numbers
    cout << "Please enter two number to find GCD " <<endl
         << "The will be tested by two methods " <<endl <<endl
         << "Method 1 will be Eculidian Method " <<endl
         << "Method 2 will be done by brute force " <<endl
         <<"Number 1: ";
    cin >> num1;
    cout <<"Number 2: ";
    cin >> num2;
    
    //Will sort out the lowest & highest numbers
    if (num1 < num2){
        minNum = num1;
        maxNum = num2;
    }
    if (num2 < num1){
        minNum = num2;
        maxNum = num1;
    }
    
    
    //Method 1 (Euclidean Method)
    auto start = get_time::now();       //Start Timer
    cout <<endl <<"Method 1:" <<endl;
    
    cout <<"The GCD is: " << GCD(maxNum,minNum) <<endl; //Calls/Displays the GCD Function
    
    auto end = get_time::now();         //Stop Timer
    auto diff = end - start;            //Get Difference of Time
    cout <<"Elapsed time is:  "<< chrono::duration_cast<ns>(diff).count() <<" ns " <<endl <<endl; //Displays Time Elapsed

    
    
    //METHOD 2 (Brute Force)
    auto start2 = get_time::now();      //Stats Timer
    cout <<"Method 2: " <<endl;
    
    //For Loop: Will keep moding until remainder 0 is reached
    for (int k = 1; k <= minNum; k++){
        if ((num1 % k)== 0 && (num2 % k) ==0){
            gcd = k;
        }
    }
    cout <<"The GCD is: " <<gcd <<endl;
    
    auto end2 = get_time::now();        //Stops Timer
    auto diff2 = end2 - start2;         //Get Difference of Time
    cout <<"Elapsed time is:  "<< chrono::duration_cast<ns>(diff2).count() <<" ns " <<endl <<endl; //Displays time Elapsed
    
    //Will tell which method was faster
    if (diff < diff2){
        cout << "Eculidian Method was faster" <<endl;
    }
    else
        cout <<"Brute Force was faster" <<endl;
    
    return 0;
    
}

//GCD Euclidian Method Function
int GCD(int int1, int int2){
    if (int2 == 0){
        return int1;
    }
    else
        return GCD(int2, int1 % int2);
    
    return 0;
}

