#include <iostream>
#include <string>

// Base Class
class LibraryItem {
protected:
    std::string title;
    std::string itemID;
    bool isAvailable;

public:
    // Constructor
    LibraryItem(std::string t, std::string id) 
        : title(t), itemID(id), isAvailable(true) {}

    // Common method to display basic details
    void displayBaseInfo() const {
        std::cout << "Item ID: " << itemID << "\n"
                  << "Title: " << title << "\n"
                  << "Status: " << (isAvailable ? "Available" : "Checked Out") << "\n";
    }

    // Method to check out the item
    void checkOut() {
        if (isAvailable) {
            isAvailable = false;
            std::cout << "\"" << title << "\" has been checked out successfully.\n";
        } else {
            std::cout << "\"" << title << "\" is already checked out.\n";
        }
    }

    virtual ~LibraryItem() {} // Virtual destructor for safe polymorphism
};

// Derived Class 1: Book
class Book : public LibraryItem {
private:
    std::string author;
    int pageCount;

public:
    // Constructor using initializer list to call base constructor
    Book(std::string t, std::string id, std::string auth, int pages)
        : LibraryItem(t, id), author(auth), pageCount(pages) {}

    // Specific method for Book
    void displayBookDetails() const {
        std::cout << "--- Book Details ---\n";
        displayBaseInfo();
        std::cout << "Author: " << author << "\n"
                  << "Page Count: " << pageCount << "\n\n";
    }
};

// Derived Class 2: Magazine
class Magazine : public LibraryItem {
private:
    int issueNumber;
    std::string releaseMonth;

public:
    // Constructor using initializer list to call base constructor
    Magazine(std::string t, std::string id, int issue, std::string month)
        : LibraryItem(t, id), issueNumber(issue), releaseMonth(month) {}

    // Specific method for Magazine
    void displayMagazineDetails() const {
        std::cout << "--- Magazine Details ---\n";
        displayBaseInfo();
        std::cout << "Issue Number: " << issueNumber << "\n"
                  << "Release Month: " << releaseMonth << "\n\n";
    }
};

int main() {
    // Creating objects of derived classes
    Book myBook("The C++ Programming Language", "B101", "Bjarne Stroustrup", 1300);
    Magazine myMagazine("Tech Today", "M505", 42, "September");

    // Displaying details
    myBook.displayBookDetails();
    myMagazine.displayMagazineDetails();

    // Demonstrating inherited behavior
    std::cout << "--- Action: Checking out the book ---\n";
    myBook.checkOut();
    
    // Trying to check out the same book again
    myBook.checkOut();

    return 0;
}