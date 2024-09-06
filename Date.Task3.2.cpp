#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year )
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    int getDay()
    {
        return day;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    int getMonth()
    {
        return month;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
        return year;
    }
    bool isValidDate()
    {
        if (month < 1 || month > 12)
        {
            return false;
        }
        if (day < 1 || day > 31)
        {
            return false;
        }
        if (month == 2 && day > 28)
        {
            return false;
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        {
            return false;
        }
        return true;
    }
     void display() {
        if (isValidDate()) {
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "Invalid date!" << endl;
        }
    }



};
int main()
{
     Date date1(20, 2, 2024);
     date1.display();

     Date date2(32, 4, 2023);
     date2.display();

     Date date3(18, 9, 2024);
     date1.display();

     Date date4(7, 13, 2023);
     date2.display();

    return 0;
}
