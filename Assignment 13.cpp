#include <iostream>
using namespace std;

void towerFun(int k, int start, int spare, int end, int** pos);
void ringMoves(int start, int end, int** pos);

char towerNames[3] = { 'A', 'B', 'C' };
int numDisks;

int main(){
    
    int i = 0;
    int j = 0;
    extern int numDisks; //to be defined
    
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    
    int** position = new int*[3];
    for (int index = 0; index < 3; index++){
        
        position[index] = new int[numDisks];
    }
    

    for (i = 0; i < 3; ++i){
        
        for (j = 0; j < numDisks; ++j){
            
            if (i == 0){
                
                position[i][j] = (j + 1);
            }
            else{
                
                position[i][j] = 0;
            }
        }
    }
    

    for (i = 0; i < 3; ++i){
        
        if (i == 0){
            
            cout << "A: ";
        }
        else if (i == 1){
            
            cout << "B: ";
        }
        else{
            
            cout << "C: ";
        }
        
        for (j = 0; j < numDisks; j++){
            
            cout << position[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
    towerFun(numDisks, 0, 1, 2, position);
    
    for (int index = 0; index < 3; index++){
        
        delete[] position[index];
    }
    
    delete[] position;
    
    return 0;
}



void towerFun(int k, int start, int spare, int end, int** pos){
    
    if (k == 1){
        
        ringMoves(start, end, pos);
    }
    
    else{
        
        towerFun(k - 1, start, end, spare, pos);
        ringMoves(start, end, pos);
        towerFun(k - 1, spare, start, end, pos);
    }
    
    return;
}



void ringMoves(int start, int end, int** pos){
    
    int i = 0;
    int j = 0;
    
    while (pos[start][i] == 0){
        
        i++;
    }
    
    while ((pos[end][j] == 0) && (j < numDisks)){
        
        j++;
    }
    
    j -= 1;
    
    cout << "Move disk #" << pos[start][i] << " from "
    << towerNames[start] << " to " << towerNames[end]
    << ": " <<endl;
    pos[end][j] = pos[start][i];
    pos[start][i] = 0;
    
    for (i = 0; i < 3; ++i){
        
        if (i == 0){
            cout << "A: ";
        }
        
        else if (i == 1){
            
            cout << "B: ";
        }
        else{
            
            cout << "C: ";
        }
        
        for (j = 0; j < numDisks; j++){
            
            cout << pos[i][j];
        }
        
        cout << endl;
    }
    
    cout << endl;
    
    cout << "Enter character to see next steps: " <<endl;
    cin.get();

    return;
}
