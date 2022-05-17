//
//  main.cpp
//  lower triangualr matrix
//
//  Created by Aryan Rawat on 28/03/22.
//

#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter The Number of rows ";
    cin>>r;
    cout<<"Enter The number of columns ";
    cin>>c;
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout << "Upper triangular matrix: \n";
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        if (i > j)
        {
          cout << "0" << " ";
        }
        else
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
 
    return 0;
}
