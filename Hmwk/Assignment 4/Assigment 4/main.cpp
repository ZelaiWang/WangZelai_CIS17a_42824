//problem6,8,10have some problem
#include <iostream>
#include <string>
#include <cmath>
#include "LandTract.h"
using namespace std;

//Global Constants Here!!!

//Function Prototypes Here!!!
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        case 8:    problem8();break;
        case 9:    problem9();break;
        case 10:   problem10();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=10);
    return 0;
}

void Menu(){
    cout<<endl<<endl<<"Menu for the Assigment 4"<<endl;
    cout<<"Type 1 for problem 13.1"<<endl;
    cout<<"Type 2 for problem 13.4"<<endl;
    cout<<"Type 3 for problem 13.6"<<endl;
    cout<<"Type 4 for problem 13.7"<<endl;
    cout<<"Type 5 for problem 13.8"<<endl;
    cout<<"Type 6 for problem 14.1"<<endl;
    cout<<"Type 7 for problem 14.4"<<endl;
    cout<<"Type 8 for problem 14.7"<<endl;
    cout<<"Type 9 for problem 14.10"<<endl;
    cout<<"Type 10 for problem 14.12"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
    int inN;
    cin>>inN;
    return inN;
}

class Date{
    private:
        int month;
        int day;
        int year;
    public:
        void setDate(int,int,int);
        void dateFormat1();
        void dateFormat2();
        void dateFormat3();
        string getMonth(int);
        Date(int,int,int);
};

Date::Date(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

void Date::setDate(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

void Date::dateFormat1(){
    cout<<endl<<"The date you have entered in format 1 is: "
            <<month<<"/"<<day<<"/"<<year;
}

void Date::dateFormat2(){
    string Month;
    Month = getMonth(month);
    cout<<endl<<"The date you have entered if format 2 is: "
            <<Month<<" "<<day<<", "<<year;
}

void Date::dateFormat3(){
    string Month;
    Month = getMonth(month);
    cout<<endl<<"The date you have entered if format 3 is: "
            <<day<<" "<<Month<<" "<<year;
}

string Date::getMonth(int m){
    string month;
    if (m == 1)
        month = "January";
    else if (m == 2)
        month = "February";
    else if (m == 3)
        month = "March";
    else if (m == 4)
        month = "April";
    else if (m == 5)
        month = "May";
    else if (m == 6)
        month = "June";
    else if (m == 7)
        month = "July";
    else if (m == 8)
        month = "August";
    else if (m == 9)
        month = "September";
    else if (m == 10)
        month = "October";
    else if (m == 11)
        month = "November";
    else if (m == 12)
        month = "December";
    else
        month = "invalid Month";
    return month;
}

void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
    int monthIn,dayIn,yearIn;
    Date inputDate(1,1,2001);
    cout<<"Enter date to display in different formats"<<endl;
    cout<<"Enter the month of the date: ";
    cin >>monthIn;
    cout<<"Enter the day of the date: ";
    cin >>dayIn;
    cout<<"Enter the year of the date: ";
    cin >>yearIn;
    
    if(monthIn < 1 || monthIn > 12 || dayIn < 1 || dayIn > 31
            || yearIn < 1950 || yearIn > 2020){
        cout<<endl<<"The date you entered is invalid "<<endl;
        cout<<"The default date to display is: "<<endl;
        inputDate.dateFormat1();
        inputDate.dateFormat2();
        inputDate.dateFormat3();
    }
    else{
        inputDate.setDate(monthIn, dayIn, yearIn);
        inputDate.dateFormat1();
        inputDate.dateFormat2();
        inputDate.dateFormat3();
    }
}

class PersonalInfo{
    string name, address, phoneNum;
    int age;
    public:
        void setName(string n){
            name = n;
        }
        void setAddress(string ad){
            address = ad;
        }
        void setPhoneNum(string ph){
            phoneNum = ph;
        }
        void setAge(int a){
            age = a;
        }
        string getName()const{
            return name;
        }
        string getAddress()const{
            return address;
        }
        string getPhoneNum()const{
            return phoneNum;
        }
        int getAge(){
            return age;
        }
};

void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
    string name, address, phoneNum;
    int age;
    PersonalInfo *person_info;
    person_info = new PersonalInfo();
    PersonalInfo *family_info;
    family_info = new PersonalInfo();
    PersonalInfo *friend_info;
    friend_info = new PersonalInfo();
    
    cout<<"\nPersonal Details: "<<endl;
    cout<<"Enter name: "<<endl;
    cin >>name;
    person_info->setName(name);
    cout<<"Enter address: "<<endl;
    cin >>address;
    person_info->setAddress(address);
    cout<<"Enter age: "<<endl;
    cin >>age;
    person_info->setAge(age);
    cout<<"Enter phone number: "<<endl;
    cin >>phoneNum;
    person_info->setPhoneNum(phoneNum);
    
    cout<<"\nFamily Details: "<<endl;
    cout<<"Enter family name: "<<endl;
    cin >>name;
    family_info->setName(name);
    cout<<"Enter family address: "<<endl;
    cin >>address;
    family_info->setAddress(address);
    cout<<"Enter family age: "<<endl;
    cin >>age;
    family_info->setAge(age);
    cout<<"Enter family phone number: "<<endl;
    cin >>phoneNum;
    family_info->setPhoneNum(phoneNum);
    
    cout<<"\nFriend Details: "<<endl;
    cout<<"Enter friend name: "<<endl;
    cin >>name;
    friend_info->setName(name);
    cout<<"Enter friend address: "<<endl;
    cin >>address;
    friend_info->setAddress(address);
    cout<<"Enter friend age: "<<endl;
    cin >>age;
    friend_info->setAge(age);
    cout<<"Enter friend phone number: "<<endl;
    cin >>phoneNum;
    friend_info->setPhoneNum(phoneNum);
    
    cout<<"\n\nPersonal details are: "<<endl;
    cout<<"Name: "<<person_info->getName()<<endl;
    cout<<"Address: "<<person_info->getAddress()<<endl;
    cout<<"Age: "<<person_info->getAge()<<endl;
    cout<<"Phone: "<<person_info->getPhoneNum()<<endl;
    
    cout<<"\n\nFamily details are: "<<endl;
    cout<<"Name: "<<family_info->getName()<<endl;
    cout<<"Address: "<<family_info->getAddress()<<endl;
    cout<<"Age: "<<family_info->getAge()<<endl;
    cout<<"Phone: "<<family_info->getPhoneNum()<<endl;
    
    cout<<"\n\nFriend details are: "<<endl;
    cout<<"Name: "<<friend_info->getName()<<endl;
    cout<<"Address: "<<friend_info->getAddress()<<endl;
    cout<<"Age: "<<friend_info->getAge()<<endl;
    cout<<"Phone: "<<friend_info->getPhoneNum()<<endl;
}

class Inventory{
    private:
        int itemNumber;
        int quantity;
        float cost;
        float totalCost;
    public:
        Inventory(){
            itemNumber = 0;
            quantity = 0;
            cost = 0.0;
            totalCost = 0.0;
        }
        Inventory(int n, int q, double c){
            setItemNumber(n);
            setQuantity(q);
            setCost(c);
            setTotalCost();
        }
        void setItemNumber(int item_num){
            itemNumber = item_num;
        }
        void setQuantity(int qun){
            quantity = qun;
        }
        void setCost(float cs){
            cost = cs;
        }
        void setTotalCost(){
            totalCost = cost*quantity;
        }
        int getItemNumber(){
            return itemNumber;
        }
        int getQuantity()const{
            return quantity;
        }
        float getCost()const{
            return cost;
        }
        float getTotalCost(){
            return totalCost;
        }
};

void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
    int item_no, qty;
    float cs, tc;
    cout<<"Enter item number: ";
    cin >>item_no;
    cout<<"Enter item quantity: ";
    cin >>qty;
    cout<<"Enter item cost: ";
    cin >>cs;
    
    if(item_no < 0 || qty < 0 || cs < 0)
        cout<<"\nYou have enter invalid caluse...\n";
    else{
        Inventory inv(item_no, qty, cs);
        cout<<"\nThe Details of the item you have entered: \n"<<endl;
        cout<<"Item Number : "<<inv.getItemNumber()<<endl;
        cout<<"Quantity    : "<<inv.getQuantity()<<endl;
        cout<<"Cost        : "<<inv.getCost()<<endl;
        cout<<"Total Cost  : "<<inv.getTotalCost()<<endl;
    }
}

class TestScores{
    private:
        float score1, score2, score3;
    public:
        TestScores(){
            score1 = 0;
            score2 = 0;
            score3 = 0;
        }
        TestScores(int m1,int m2,int m3){
            score1 = m1;
            score2 = m2;
            score3 = m3;
        }
        void setScore1(float sc1){
            score1 = sc1;
        }
        void setScore2(float sc2){
            score2 = sc2;
        }
        void setScore3(float sc3){
            score3 = sc3;
        }
        float getScore1(){
            return score1;
        }
        float getScore2(){
            return score2;
        }
        float getScore3(){
            return score3;
        }
        float avgTestScores(){
            return (score1 + score2 + score3) / 3;
        }
};

void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
    float sc1,sc2,sc3;
    cout<<"Enter Score1: ";
    cin >>sc1;
    cout<<"Enter Score2: ";
    cin >>sc2;
    cout<<"Enter Score3: ";
    cin >>sc3;
    
    TestScores test(sc1,sc2,sc3);
    test.setScore1(sc1);
    test.setScore2(sc2);
    test.setScore3(sc3);
    
    cout<<"\nScore1: "<<test.getScore1()
        <<"\nScore2: "<<test.getScore2()
        <<"\nScore3: "<<test.getScore3();
    cout<<"\nAverage of three Test Scores: "<<test.avgTestScores()<<endl;
}

class Circle{
    private:
        float radius;
        float pi;
    public:
        Circle(){
            radius = 0.0;
            pi = 3.14159;
        }
        Circle(float r){
            radius = r;
        }
        void setRadius(float r){
            radius = r;
        }
        float getRadius(){
            return radius;
        }
        float getArea(){
            return pi * radius * radius;
        }
        float getDiameter(){
            return radius * 2;
        }
        float getCircum(){
            return 2 * pi * radius;
        }
};

void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
    Circle c;
    float r;
    cout<<"Enter the radius of the circle: "<<endl;
    cin >>r;
    c.setRadius(r);
    cout<<"Area of the circle: "<<c.getArea()<<endl;
    cout<<"Diameter of the circle: "<<c.getDiameter()<<endl;
    cout<<"Circumference of the circle: "<<c.getCircum()<<endl;
}

class Numbers{
    private:
        int num;
    public:
        Number(int x){
            num = x;
        }
        void print();
};

void Numbers::print(){
    int n;
    string lessThan20[20]={"zero","one","two","three","four","five","six",
                            "seven","eight","nine","ten","eleven","twelve",
                            "therteen","fourteen","fifteen","sixteen",
                            "seventeen","eighteen","nineteen"};
    string hundred = " hundred ";
    string thousand = " thousand ";
    string tens[]{"zero","ten","twenty","thirty","forty","fifty","sixty",
                    "seventy","eighty","ninety"};
    if(num < 0)
        cout<<"It is a negative number ";
    num = abs(num);
    n = num / 1000;
    if(n > 0)
        cout<<" "<<lessThan20[n]<<thousand;
    num %= 1000;
    n= num / 100;
    if(n > 0)
        cout<< lessThan20[n]<<hundred;
    num %= 100;
    if(num >= 20){
        n = num / 10;
        if(n>0)
            cout<<tens[n]<<" ";
    }
    else if(num >= 10){
        cout<< lessThan20[num]<<" ";
        return;
    }
    num %= 10;
    if(num > 0)
        cout<<" ";
}

void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
    int n;
    cout<<"Enter a Number [range 0-9999 (or) 0 to Exit]: ";
    cin >>n;
    while(n != 0){
        cout<<"The number "<<n<<" thanslated into the string is: ";
        Numbers number(n);
        number.print();
        cout<<"Enter a Number [range 0-9999 (or) 0 to Exit]: ";
        cin >>n;
    }
}

class NumDays{
    private:
        float hours;
        float days;
    public:
        NumDays(){
            hours = 0;
            days = 0;
        }
        NumDays(float h){
            hours = h;
            days = h/8;
        }
        void setHours(float h){
            hours = h;
            days = h/8;
        }
        float getHours() const{
            return hours;
        }
        void setDays(float d){
            hours = d;
            days = d/8;
        }
        float getDays() const{
            return days;
        }
        NumDays operator + (NumDays& b){
            NumDays result;
            result.setHours(this->getHours()+b.getHours());
            return result;
        }
        NumDays operator - (NumDays& b){
            NumDays result;
            result.setHours(this->getHours()-b.getHours());
            return result;
        }
        NumDays operator ++ (){
            this->setHours(this->getHours()+1);
            return*this;
        }
        const NumDays operator ++(int){
            NumDays result = *this;
            this->setHours(this->getHours()+1);
            return result;
        }
        NumDays operator -- (){
            this->setHours(this->getHours()-1);
            return*this;
        }
        const NumDays operator --(int){
            NumDays result = *this;
            this->setHours(this->getHours()-1);
            return result;
        }
};

void problem7(){
    cout<<"In problem # 7"<<endl<<endl;
    NumDays X(12), Y(8), Z, add, sub;
    cout<<"12 hours converted to days = "<<X.getDays()<<endl;
    cout<<"8 hours converted to days = "<<Y.getDays()<<endl;
    add = X + Y;
    sub = X - Y;
    cout<<"\nThe Addition operator +            : "<<add.getDays()<<endl;
    cout<<"\nThe Subtraction operator -         : "<<sub.getDays()<<endl;
    Z = ++add;
    cout<<"\n(++)Prefix Increment operator      : "<<Z.getDays()<<endl;
    Z = add++;
    cout<<"\nPostfix Decrement operator (++)    : "<<Z.getDays()<<endl;
    Z = --add;
    cout<<"\n(--)Prefix Increment operator      : "<<Z.getDays()<<endl;
    Z = add--;
    cout<<"\nPostfix Decrement operator (--)    : "<<Z.getDays()<<endl;
}

class Month{
    private:
        int monthNumber;
        string name;
    public:
        Month(){
            monthNumber = 1;
            name = "January";
        }
        Month(string nm){
            name = nm;
            setNumber(name);
        }
        Month(int number){
            if(number >= 1 && number <= 12){
                monthNumber = number;
            }
            setName(monthNumber);
        }
        void setName(int number){
            if (number == 1)
                name = "January";
            else if (number == 2)
                name = "February";
            else if (number == 3)
                name = "March";
            else if (number == 4)
                name = "April";
            else if (number == 5)
                name = "May";
            else if (number == 6)
                name = "June";
            else if (number == 7)
                name = "July";
            else if (number == 8)
                name = "August";
            else if (number == 9)
                name = "September";
            else if (number == 10)
                name = "October";
            else if (number == 11)
                name = "November";
            else
                name = "December";
        }
        void setName(string nm){
            if (nm == "January")
                monthNumber = 1;
            else if (nm == "February")
                monthNumber = 2;
            else if (nm == "March")
                monthNumber = 3;
            else if (nm == "April")
                monthNumber = 4;
            else if (nm == "May")
                monthNumber = 5;
            else if (nm == "June")
                monthNumber = 6;
            else if (nm == "July")
                monthNumber = 7;
            else if (nm == "August")
                monthNumber = 8;
            else if (nm == "September")
                monthNumber = 9;
            else if (nm == "October")
                monthNumber = 10;
            else if (nm == "November")
                monthNumber = 11;
            else
                monthNumber = 12;
        }
        int getNumber(){
            return monthNumber;
        }
        string getName(){
            return name;
        }
        Month Month::operator++();
        Month Month::operator--();
        friend ostream &operator<< (ostream & , const Month &);
        friend istream &operator<< (istream & , Month &);
};

Month Month::operator ++(){
    monthNumber++;
    if(monthNumber==13){
        monthNumber=1;
        name="January";
    }
    setName(monthNumber);
    return *this;
}

Month Month::operator --(){
    monthNumber--;
    if(monthNumber==0){
        monthNumber=12;
        name="December";
    }
    setName(monthNumber);
    return *this;
}

ostream &operator<< (ostream &str , const Month &obj){
    str<<" Month Details:\nName:"
            <<obj.name<<"\nNumber:"<<obj.monthNumber<<endl;
    return str;
}

istream &operator>> (istream &str , Month &obj){
    cout<<"Enter month number: ";
    str >>obj.monthNumber;
    cout<<"Enter month name: ";
    str >>obj.name;
    return str;
}

void problem8(){
    cout<<"In problem # 8"<<endl<<endl;
    Month m1;
    cout<<"Input details: ";
    cin >>m1;
    m1++;
    cout<<m1;
    m1--;
    cout<<m1;
}

class DivSales{
    public:
        int quarterSales[4];
        static int totalSales;
        void add(int s1,int s2,int s3,int s4){
            quarterSales[0] = s1;
            quarterSales[1] = s2;
            quarterSales[2] = s3;
            quarterSales[3] = s4;
            totalSales = totalSales + s1 + s2 + s3 + s4;
        }
        int Sales(int n){
            int value = quarterSales[n];
            return value;
        }
};

int DivSales::totalSales = 0;

void problem9(){
    cout<<"In problem # 9"<<endl<<endl;
    DivSales ds[6];
    int i,j;
    for(i=0;i<6;i++){
        int s1,s2,s3,s4;
        cout<<"Enter Sales of Division: "<<i + 1<<endl;
        cout<<"Enter Q1 Sales: ";
        cin >>s1;
        cout<<"Enter Q2 Sales: ";
        cin >>s2;
        cout<<"Enter Q3 Sales: ";
        cin >>s3;
        cout<<"Enter Q4 Sales: ";
        cin >>s4;
        ds[i].add(s1,s2,s3,s4);
    }
    cout<<"-----------------------------------\n";
    cout<<"\t"<<"Q1"<<"\t"<<"Q2"<<"\t"<<"Q3"<<"\t"<<"Q4"<<endl;
    for(i=0;i<6;i++){
        cout<<"Div "<<i+1;
        for(j=0;j<4;j++)
            cout<<"\t"<<ds[i].Sales(j);
        cout<<endl;
    }
    cout<<"-----------------------------------\n";
    cout<<"\n Total All Dicision Sales for the Year: "<<ds[0].totalSales;
}

void problem10(){
    cout<<"In problem # 10"<<endl<<endl;
    int len,wid;
    cout<<"Enter length of the landTract-I :";
    cin >>len;
    FeetInches fiLen(len);
    cout<<"Enter width of the landTract-I :";
    cin >>wid;
    FeetInches fiWid(wid);
    LandTract landTract1(fiLen,fiWid);
    cout<<"Area of LandTract-I :"<<landTract1.getAre();
    cout<<endl;
    cout<<"\nEnter length of the landTract-II :";
    cin >>len;
    FeetInches fiLen2(len);
    cout<<"Enter width of the landTract-II :";
    cin >>wid;
    FeetInches fiwid2(wid);
    LandTract landTract2(fiLen2,fiwid2);
    cout<<"Area of Lantract-II :"<<landTract1.getArea()<<endl;
    if(landTract1.getArea()==landTract2.getArea())
        cout<<"Land Tracts are of equal size ."<<endl;
    else
        cout<<"Land Tract are not equal size ."<<endl;
}

void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}