

#include <iostream>
using namespace std;
int main(){
    int first=1,second=1,next,i,n;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
}
