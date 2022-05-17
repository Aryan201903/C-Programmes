
//  main.cpp
//  Bubble Sort
//
//  Created by Aryan Garg on 17/04/22.
//

#include <iostream>
using namespace std;
int main(){
    int i , j ,size , temp = 0;
    cin>>size;
    int input[size];
    cout<<"Enter Araay " ;
    for(i=0;i<size;i++){
        cin>>input[i];
    }
    for(j=0;j<size-1;j++){
        for(i=0;i<size-1-j ; i++){
            if(input[i]<input[i+1]){
                temp = input[i];
                input[i] = input[i+1];
                temp = input[i+1];
            }
        }
        cout<<input[i]<<" ";


    }

    return 0;
}
