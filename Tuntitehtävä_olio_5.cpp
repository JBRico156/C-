#include <iostream>
#include <string>

class Book
{
private:
    std::string _title;
    int _pages;

public:
    Book(const std::string& title, int pages)
        : _title(title), _pages(pages)
    {
        std::cout << "Book '" << _title << "' created with " << _pages << " pages." << std::endl;
    }
    Book(const Book& other)
        : _title(other._title), _pages(other._pages)
    {
        std::cout << "Copy constructor called for '" << _title << "'" << std::endl;
    }

    void print_info() const
    {
        std::cout << "Title: " << _title << ", Pages: " << _pages << std::endl;
    }

    void set_title(const std::string& new_title)
    {
        _title = new_title;
    }
};

int main()
{

    Book b1("C++ Basics", 200);

    Book b2 = b1;

    std::cout << "b1: ";
    b1.print_info();
    std::cout << "b2: ";
    b2.print_info();

    return 0;
}