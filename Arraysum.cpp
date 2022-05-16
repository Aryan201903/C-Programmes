//
//  main.cpp
//  Array Sum
//
//  Created by Aryan Garg on 21/03/22.
//

#include <iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cin>>n;
    int arr[n];
    for (i=0;i<n;++i){
        cin>>arr[i];
    }
    for (i=0;i<n;++i){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}

