#include <iostream>
#include <string>

using namespace std;

// Base Class
class LibraryItem {
protected:
    string title;
    string itemID;
    int publicationYear;

public:
    // Constructor for base class
    LibraryItem(string t, string id, int year) {
        title = t;
        itemID = id;
        publicationYear = year;
    }

    // Method to display common item details
    void displayBaseInfo() {
        cout << "Item ID          : " << itemID << endl;
        cout << "Title            : " << title << endl;
        cout << "Publication Year : " << publicationYear << endl;
    }
};

// Derived Class 1: Book
class Book : public LibraryItem {
private:
    string author;
    string isbn;
    int pageCount;

public:
    // Constructor calling base class constructor
    Book(string t, string id, int year, string auth, string i, int pages) 
        : LibraryItem(t, id, year) {
        author = auth;
        isbn = i;
        pageCount = pages;
    }

    // Method to display complete book details
    void displayBookInfo() {
        cout << "--- Book Information ---" << endl;
        displayBaseInfo();
        cout << "Author           : " << author << endl;
        cout << "ISBN             : " << isbn << endl;
        cout << "Page Count       : " << pageCount << endl;
        cout << "------------------------\n" << endl;
    }
};

// Derived Class 2: Magazine
class Magazine : public LibraryItem {
private:
    int issueNumber;
    string month;
    string publisher;

public:
    // Constructor calling base class constructor
    Magazine(string t, string id, int year, int issue, string m, string pub) 
        : LibraryItem(t, id, year) {
        issueNumber = issue;
        month = m;
        publisher = pub;
    }

    // Method to display complete magazine details
    void displayMagazineInfo() {
        cout << "--- Magazine Information ---" << endl;
        displayBaseInfo();
        cout << "Issue Number     : " << issueNumber << endl;
        cout << "Month            : " << month << endl;
        cout << "Publisher        : " << publisher << endl;
        cout << "----------------------------\n" << endl;
    }
};

int main() {
    // Creating an object of the Book class
    Book myBook("The Alchemist", "B1001", 1988, "Paulo Coelho", "978-0061122415", 208);
    
    // Creating an object of the Magazine class
    Magazine myMag("National Geographic", "M2001", 2024, 512, "June", "Partners");

    // Displaying details
    myBook.displayBookInfo();
    myMag.displayMagazineInfo();

    return 0;
}