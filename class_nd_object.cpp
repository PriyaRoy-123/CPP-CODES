#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int pages;
};
int main()
{
    Book book1;
    book1.title = "Harry potter";
    book1.author = "J.K Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "You Can Win";
    book2.author = "Shiv Khera";
    book2.pages = 300;
    cout << book2.title << endl;

    return 0;
}