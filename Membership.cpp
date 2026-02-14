#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }        
};

class LibraryMember : public Person {
protected:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(int memId, int bBorrowed, string n){
        setName(n);
        memberID = memId;
        booksBorrowed = bBorrowed;
    }

    int getMemberID(){
        return memberID;
    }

    int getBooksBorrowed(){
        return booksBorrowed;
    }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int memId, int bBorrowed, double memFee)
        : LibraryMember(memId, bBorrowed, n)
    {
        membershipFee = memFee;    
    }

    double getMembershipFee(){
        return membershipFee;
    }
};

int main() {
    PremiumMember p("Alice", 101, 5, 49.99);

    cout << "Name: " << p.getName() << endl;
    cout << "Member ID: " << p.getMemberID() << endl;
    cout << "Books Borrowed: " << p.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << p.getMembershipFee() << endl;

    return 0;
}
