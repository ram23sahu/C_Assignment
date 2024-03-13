#include<iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        cout << "Inside Date Parameterless Ctor- " << endl;
        day = 1;
        month = 1;
        year = 2000;
    }
    Date(int day, int month, int year)
    {
        cout << "Inside Date Parameterized Ctor- " << endl;
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void acceptDate()
    {
        cout << "Enter day - ";
        cin >> day;
        cout << "Enter month - ";
        cin >> month;
        cout << "Enter year - ";
        cin >> year;
    }

    void displayDate()
    {
        cout << "Date - " << day << "/" << month << "/" << year << endl;
    }
};

class employee{
    private:
int empid;
float salary;
string dept;
Date doj;
public:

employee(){
    cout<<"empid const-"<<endl;
    empid = 1;
    salary = 93002;
    dept = "DAC";
    doj.acceptDate(); 
    
    
void acceptemployee(){
    cout<<"enter "
}
}

};