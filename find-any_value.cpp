


#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int,greater<int> >s;
    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(5);
    s.insert(4);


    s.erase(5);

    if(s.find(2)!=s.end())
    {
        cout<< "Found"<<endl;
    }
    else
    {
        cout<< "Not Found"<<endl;
    }






}


