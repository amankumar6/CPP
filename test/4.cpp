#include<bits/stdc++.h>
using namespace std;
class book
{
public:
    string title;
    string author;
    int page;
    book(string atitle, string aauthor, int apage )
    {
        title=atitle;
        author=aauthor;
        page=apage;
        //cout<<title<<" "<<author<<" "<<page<<endl;
    }
};

int main()
{
    book book1("Harry Potter","ASD",567);
    book book2("Asds","dddd",456);
    
    cout<<book1.title;
    

    return 0;
}