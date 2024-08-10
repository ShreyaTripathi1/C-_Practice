#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    // Helper function to check if a year is a leap year
    bool isLeapYear(int year) const {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    }

    // Helper function to get the number of days in a month
    int daysInMonth(int month, int year) const {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(year) ? 29 : 28;
            default:
                return 0;
        }
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    // Overloading relational operators
    bool operator<(const Date& other) const {
        if (year < other.year) return true;
        if (year == other.year && month < other.month) return true;
        if (year == other.year && month == other.month && day < other.day) return true;
        return false;
    }

    bool operator<=(const Date& other) const {
        return *this < other || *this == other;
    }

    bool operator>(const Date& other) const {
        return !(*this <= other);
    }

    bool operator>=(const Date& other) const {
        return !(*this < other);
    }

    bool operator==(const Date& other) const {
        return year == other.year && month == other.month && day == other.day;
    }

    bool operator!=(const Date& other) const {
        return !(*this == other);
    }

    // Overloading ++ operator (prefix)
    Date& operator++() {
        day++;
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Overloading ++ operator (postfix)
    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }

    // Overloading + operator to add days
    Date operator+(int daysToAdd) const {
        Date temp = *this;
        temp.day += daysToAdd;
        while (temp.day > daysInMonth(temp.month, temp.year)) {
            temp.day -= daysInMonth(temp.month, temp.year);
            temp.month++;
            if (temp.month > 12) {
                temp.month = 1;
                temp.year++;
            }
        }
        return temp;
    }

    // Conversion operator to int
    operator int() const {
        int daysElapsed = 0;
        for (int m = 1; m < month; ++m) {
            daysElapsed += daysInMonth(m, year);
        }
        daysElapsed += day;
        return daysElapsed;
    }

    // Friend function to allow ostream access to private members
    friend ostream& operator<<(ostream& os, const Date& dt);
};

ostream& operator<<(ostream& os, const Date& dt) {
    os << dt.day << "/" << dt.month << "/" << dt.year;
    return os;
}

int main() {
    Date dt1(28, 2, 2024); // Leap year date
    Date dt2(1, 3, 2024);

    cout << "Date 1: " << dt1 << endl;
    cout << "Date 2: " << dt2 << endl;

    // Relational operators
    cout << "dt1 < dt2: " << (dt1 < dt2) << endl;
    cout << "dt1 <= dt2: " << (dt1 <= dt2) << endl;
    cout << "dt1 > dt2: " << (dt1 > dt2) << endl;
    cout << "dt1 >= dt2: " << (dt1 >= dt2) << endl;
    cout << "dt1 == dt2: " << (dt1 == dt2) << endl;
    cout << "dt1 != dt2: " << (dt1 != dt2) << endl;

    // Increment operator
    ++dt1;
    cout << "Date 1 after increment: " << dt1 << endl;

    // Addition operator
    Date dt3 = dt1 + 10;
    cout << "Date 1 after adding 10 days: " << dt3 << endl;

    // Conversion to int
    int daysElapsed = dt1;
    cout << "Days elapsed in the current year for dt1: " << daysElapsed << endl;

    return 0;
}
