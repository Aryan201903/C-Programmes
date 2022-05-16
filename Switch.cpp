//
//  main.cpp
//  Switch Case
//
//  Created by Aryan Garg on 18/03/22.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter Course Number = ";
    cin>>n;
    switch (n) {
        case 0:
            cout<<"Student opted OS"<<endl;
            break;
        case 1:
            cout<<"Student grade is DBMS"<<endl;
            break;
        case  2:
            cout<<"Student grade is OOPs"<<endl;
            break;
        case  3:
            cout<<"Student grade is DS"<<endl;
            break;
            
        default:
            cout<<"Student not registered"<<endl;
            break;
    }
    return 0;
}

