//
//  main.cpp
//  forlloop
//
//  Created by Aryan Rawat on 19/03/22.
//

#include <iostream>
using namespace std;

int main()
{
    int n,i=3,count,num;
    cout<<"Enter the number of prime you want=";
    cin>>n;
    if(n>=1){
        cout<<"First n prime numbers are: ";
        cout<<"2 ";
    }
    for(count=2; count<=n; i++){
        for(num=2; num<i; num++){
            if(i%num==0)
                break;
        }
        if(num==i){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl;
    return 0;
}
