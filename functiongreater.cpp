#include<iostream>
using namespace std;
void checkmax(int,int,int);
void checkmin(int,int,int);
int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    checkmax(a,b,c);
    checkmin(a,b,c);
    return 0;
}
void checkmax(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greatest";
        }
        else 
        {
            cout<<"c is greatest";
        }
    }
    else if(b>c)
    {
        cout<<"b is greatest";
    }
    else
    {
        cout<<"c is greatest";
    }
    cout<<endl;
}
void checkmin(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
        {
            cout<<"a is smallest";
        }
        else
        {
            cout<<"c is smallest";
        }
    }
    else if(b<c)
    {
        cout<<"b is smallest";
    }
    else
    {
        cout<<"c is smallest";
    }
}