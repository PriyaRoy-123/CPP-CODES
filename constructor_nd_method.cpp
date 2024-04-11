#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};
int main()
{
    Book book1("Harry Potter", "J.K Rowling", 500);
    Book book2("You Can Win", "Shiv Khera", 300);
    cout << book1.title << endl;
    return 0;
}