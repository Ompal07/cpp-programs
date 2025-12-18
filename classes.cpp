#include <iostream>
#include <string>
#include "Burrito.h"


using namespace std;


class OmsClass{
    public:

        OmsClass(string name){
            setName(name);
        }

        void setName(string x){
            name =x;
        }

        string getName(){
            return name;
        }

        string printMethodType(){
            return "The variable was private and the methods were public!"; 
        }

    private:
        string name;
};


int main(){

    OmsClass oo("Ompal Singh Bhati");
    // oo.setName("Ompal Singh Bhati");
    cout<< oo.getName()<< endl;

    OmsClass oo2("Not Omie Singh Bhati");
    cout<< oo2.getName()<< endl;

    Burrito bo;

    // cout<< oo.printMethodType();
    return 0;
}