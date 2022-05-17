//
//  main.cpp
//  piggie bank
//
//  Created by Aryan Garg on 15/04/22.


                                    //without paramters


#include <iostream>
using namespace std;
class AddAmount{
private:
    int amount = 50 , add  ;
public:
    AddAmount(){
        add = 90;
    }
    void finalamount(){
        cout<<"Final Amount : "<< add + amount<<endl;
    }
};
int main(){
    AddAmount obj;
    obj.finalamount()
    return 0;
}

                                    //using parameters


//#include <iostream>
//using namespace std;
//class AddAmount{
//private:
//    int amount = 50 , add  ;
//public:
//    AddAmount(int b){
//        add = b ;
//    }
//    void finalamount(){
//        cout<<"Final Amount : "<< add + amount<<endl;
//    }
//};
//int main(){
//    AddAmount obj(4);
//    obj.finalamount();
//    return 0;
//}
