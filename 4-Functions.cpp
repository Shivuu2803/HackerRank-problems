#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d;
   cin>>a;
   cin>>b;
   cin>>c;
   cin>>d;

   if(a>b&&a>>c&&a>d)
    cout<<a<<endl;
   if(b>a&&b>c&&b>d)
    cout<<b<<endl;
   if(c>a&&c>b&&c>d)
    cout<<c<<endl;
   if(d>a&&d>b&&d>c)
    cout<<d<<endl;


    return 0;
}
