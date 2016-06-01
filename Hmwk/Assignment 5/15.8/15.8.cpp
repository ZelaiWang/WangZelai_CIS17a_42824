
#include <iostream>
#include <string>

using namespace std;

class PersonData{
private:string lastName;
        string firstName;
        string address;
        string City;
        string State;
        long int Zip;
        long int phone;
public: PersonData(){
        lastName=" ";
        firstName=" ";
        address=" ";
        City=" ";
        State=" ";
        Zip=0;
        phone=0;
        }
        void setlastName(string);
        void setfirstName(string);
        void setAddress(string);
        void setcity(string);
        void setState(string);
        void setZip(long);
        void setPhone(long);
        string getlastName();
        string getfirstName();
        string getAddress();
        string getcity();
        string getState();
        long getZip();
        long getPhone();
};
void PersonData::setlastName(string lname){
    lastName=lname;
}
void PersonData::setfirstName(string fname){
    firstName=fname;
}
void PersonData::setAddress(string addr){
    address=addr;
}
void PersonData::setcity(string city){
    City=city;
}
void PersonData::setState(string state){
    State=state;
}
void PersonData::setZip(long z){
    Zip=z;
}
void PersonData::setPhone(long phno){
    phone=phno;
}
string PersonData::getlastName(){
    return lastName;
}
string PersonData::getfirstName(){
    return firstName;
}
string PersonData::getAddress(){
    return address;
}
string PersonData::getcity(){
    return City;
}
string PersonData::getState(){
    return State;
}
long PersonData::getZip(){
    return Zip;
}
long PersonData::getPhone(){
    return phone;
}
class CustomerData:public PersonData{
    private:int customerNumber;
            bool mailingList;
    public: CustomerData(){
            customerNumber=0;
            mailingList=false;
            }
            void setcustomerNumber(int);
            void setmailingList(bool);
            int getcustomerNumber();
            bool getmailingList();
};
void CustomerData::setcustomerNumber(int num){
    customerNumber=num;
}
void CustomerData::setmailingList(bool list){
    mailingList=list;
}
int CustomerData::getcustomerNumber(){
    return customerNumber;
}
bool CustomerData::getmailingList(){
    return mailingList;
}
class PreferredCustomer:public CustomerData{
    private:double purchaseAmount;
            double discountLebel;
    public: PreferredCustomer(){
                purchaseAmount=0;
                discountLebel=0;
            }
            void setpurchaseAmount();
            void setdiscountLebel();
            double getpurchaseAmount();
            double getdiscountLebel();
};
void PreferredCustomer::setpurchaseAmount(){
    double amount;
    cout <<"Enter customer spent amount:";
    cin  >>amount;
    purchaseAmount=amount;
}
void PreferredCustomer::setdiscountLebel(){
    if (purchaseAmount>=500&&purchaseAmount<1000)
        discountLebel=5;
    else if (purchaseAmount>=1000&&purchaseAmount<1500)
        discountLebel=6;
    else if (purchaseAmount>=1500&&purchaseAmount<2000)
        discountLebel=7;
    else if (purchaseAmount>=2000)
        discountLebel=10;
}
double PreferredCustomer::getpurchaseAmount(){
    return purchaseAmount;
}
double PreferredCustomer::getdiscountLebel(){
    return discountLebel;
}
int main(){
    PreferredCustomer cust1;
    string name,addr,city,state;
    int custId;
    long Zcode,phno;
    cout <<"enter Customer first name:";
    cin  >>name;
    cust1.setfirstName(name);
    cout <<"enter Customer Last name:";
    cin  >>name;
    cust1.setlastName(name);
    cout <<"Enter address:";
    cin  >>addr;
    cust1.setAddress(addr);
    cout <<"Enter city name:";
    cin  >>city;
    cust1.setcity(city);
    cout <<"Enter state name:";
    cin  >>state;
    cust1.setState(state);
    cout <<"Enter Zip code:";
    cin  >>Zcode;
    cust1.setZip(Zcode);
    cout <<"Enter Phone number:";
    cin  >>phno;
    cust1.setPhone(phno);
    cout <<"Enter customer number:";
    cin  >>custId;
    cust1.setcustomerNumber(custId);
    cust1.setmailingList(true);
    cust1.setpurchaseAmount();
    cust1.setdiscountLebel();
    
    cout <<"\n\n---- Custommer Data ----"<<endl;
    cout <<"Customer first name:"<<cust1.getfirstName()<<endl;
    cout <<"Customer last name: "<<cust1.getlastName()<<endl;
    cout <<"Customer Number:    "<<cust1.getcustomerNumber()<<endl;
    cout <<"Customer Address:   "<<cust1.getAddress()<<endl;
    cout <<"City name:          "<<cust1.getcity()<<endl;
    cout <<"State name:         "<<cust1.getState()<<endl;
    cout <<"Zip code:           "<<cust1.getZip()<<endl;
    cout <<"Phone Number:       "<<cust1.getPhone()<<endl;
    cout <<"Mailing list:       "<<cust1.getmailingList()<<endl;
    cout <<"Customer Purchase:  "<<cust1.getpurchaseAmount()<<endl;
    cout <<"Customer Discount:  "<<cust1.getdiscountLebel()<<"%\n"<<endl;
}