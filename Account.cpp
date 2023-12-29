#include <iostream>
using namespace std;



class Account{
private:
int Id;
string Name;
string PhoneNumber;


public:
Account()=default;

void setId(int Id){
    this->Id;
}

int getId(){
    return Id;
}


};