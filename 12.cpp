#include<iostream>
#include<cstring>

using namespace std;

class book
{
private:
    char title[100];
    int year;
    float price[5];
public:
    book() {}
    book(char *t, int y, float p)
    {
        strcpy(title, t);
        year=y;
        price=p;
    }
    void setTitle(char *t)
    {
        strcpy(title, t);
    }
     void setyear(int y)
    {
        year=y;
    }
    void setprice(int p)
    {
        price=p;
    }
    char *gettitle()
    {
        return title;
    }
    int *getyear()
    {
        return year;
    }
    float *getprice()
    {
        return price;
    }
    void display()
    {
        cout<<"title "<<gettitle()<<endl;
        cout<<"year "<<getyear()<<endl;
        cout<<"price "<<getprice()<<endl;
    }
};
void skapo(book *books, int n)
{
    book tmp;
    tmp=books[0];
    for (int j=0; j<n; j++)
    {
        if(books[j].getprice()>tmp.getprice())
        {
            tmp=books[j];
        }
        tmp.display();
    }
}
