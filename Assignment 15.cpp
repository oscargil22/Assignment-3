//
//  Oscar Gil
//  Assignment 15
//

#include <iostream>
#include <vector>
using namespace std;

vector<string> setA;
vector<string> setB;

void addItem(vector <string>&);
void intersect(vector<string> setA, vector<string> setB);
void ABunion(vector <string> setA, vector<string> setB);
void subtraction(vector <string> set1, vector<string> set2);

int main(){
    
    int input;
    
    do{
    cout <<"1) Add item to Set A" <<endl
         <<"2) Add item to Set B" <<endl
         <<"3) A interset B" <<endl
         <<"4) A union B" <<endl
         <<"5) A diff B" <<endl
         <<"6) B diff A" <<endl
         <<"Enter 0 to exit";
    cin >> input;
    
        switch (input) {
            case 1:
                cout <<"Enter an item to add to Set A: ";addItem(setA);
                cout<<endl;
                break;
            case 2:
                cout <<"Enter an item to add to Set B: ";addItem(setB);
                cout<<endl;
                break;
            case 3:
                cout <<"The intersect of A & B is: "<<endl;
                intersect(setA, setB);
                cout<<endl<<endl;
                break;
            case 4:
                cout<< "The union of A & B is: ";
                ABunion(setA, setB);
                break;
            case 5:
                cout <<"A difference B: ";
                subtraction(setA, setB);
                break;
            case 6:
                cout <<"B difference A: ";
                subtraction(setB, setA);
                break;
                
            default:
                break;
        }
    }
    while(input != 0);
    return 0;
}


void addItem(vector <string> &temp){
    string val;
    cin>> val;
    temp.push_back(val);
}

void intersect(vector<string> setA, vector<string> setB){
    vector<string>:: iterator iA;
    vector<string>:: iterator iB;
    iB = setB.begin();
    
    do{
        for(iA = setA.begin(); iA !=setA.end(); iA++)
        {
            if(*iB == *iA)
            {
                cout<<*iB<<" ";
                iB++;
                
            }
            else{
                continue;
            }
        }
            iB++;
        }
    while(iB != setB.end());
}

void subtraction(vector<string> set1, vector<string> set2){
    vector<string>::iterator iset1;
    vector<string>::iterator iset2;
    iset1 = set1.begin();
    
    bool flag = false;
    
    do{
        for(iset2 = set2.begin(); iset2!= set2.end();iset2++){
            if(*iset1 == *iset2 && iset1 != set1.end()){
                flag = true;
                iset1++;
                break;
            }
            if(iset1 == set1.end() && flag != false){
                return;
            }
            if(iset1 ==set1.end()&& flag == false){
                cout << *iset1<< " ";
                return;
            }
            else if(iset1!=set1.end()&& flag ==false){
                cout <<*iset1 <<" ";
            }
            else{
                flag = false;
                iset1++;
            }
        }
    }
    while (iset1 != set1.end());
}

