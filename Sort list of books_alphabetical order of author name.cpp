#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

class Book {
private:
    int book_id;
    string author_name;
    double price;
    int no_of_pages;
    string publisher;
    int year_of_publishing;

public:
    Book() {}

    Book(int id, string author, double price, int pages, string publisher, int year) {
        this->book_id = id;
        this->author_name = author;
        this->price = price;
        this->no_of_pages = pages;
        this->publisher = publisher;
        this->year_of_publishing = year;
    }

    string getAuthorName() const {
        return author_name;
    }

    void display() const {
        cout << "Book ID: " << book_id << ", Author: " << author_name << ", Price: " << price 
             << ", Pages: " << no_of_pages << ", Publisher: " << publisher 
             << ", Year: " << year_of_publishing << endl;
    }

    static bool compareByAuthor(const Book &a, const Book &b) {
        return a.getAuthorName() < b.getAuthorName();
    }
};

int main() {
    vector<Book> books;
    ifstream file("books.txt");
    string line, author, publisher;
    int id, pages, year;
    double price;

    if (file.is_open()) {
        while (getline(file, line)) {
            stringstream ss(line);
            ss >> id >> ws;
            getline(ss, author, ',');
            ss >> price >> pages >> ws;
            getline(ss, publisher, ',');
            ss >> year;
            books.push_back(Book(id, author, price, pages, publisher, year));
        }
        file.close();
    } else {
        cout << "Unable to open file" << endl;
        return 1;
    }

    sort(books.begin(), books.end(), Book::compareByAuthor);

    cout << "Books sorted by author name:" << endl;
    for (const auto &book : books) {
        book.display();
    }

    return 0;
}
