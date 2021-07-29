#include <iostream>
using namespace std;
/*
/// functions
void sayhi(string name, int age)
{
    cout << "Hello " << name <<  " you're " << age << endl;
}

int main()
{
    sayhi("mike", 21);
    sayhi("Tom", 21);
    sayhi("Harry", 22);-
    return 0;
}


///return statement
double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    double ans = cube(5.0);
    cout << ans;
    return 0;
}
*/

/// If statement

int main()
{
    /*bool ismale = true;
    if(ismale)
    {
        cout << "you are a male";
    }
    else
    {
        cout << "you are not male";
    }

    bool ismale = false;
    if(ismale)
    {
        cout << "you are a male";
    }
    else
    {
        cout << "you are not male";
    }

    bool ismale = true;
    bool istall = true;
    if(ismale && istall)
    {
        cout << "you are a tall male";
    }
    else
    {
        cout << "you are not tall male";
    }

    bool ismale = true;
    bool istall = false;
    if(ismale && istall)
    {
        cout << "you are a tall male";
    }
    else
    {
        cout << "you are not tall male";
    }

    bool ismale = false;
    bool istall = false;
    if(ismale && istall)
    {
        cout << "you are a tall male";
    }
    else
    {
        cout << "you are not tall male";
    }

    bool ismale = false;
    bool istall = true;
    if(ismale || istall)
    {
        cout << "you are a tall male";
    }
    else
    {
        cout << "you are not tall male";
    }*/

    bool ismale = true;
    bool istall = false;
    if(ismale && istall)
    {
        cout << "you are a tall male";
    }
    else if(ismale && !istall)
    {
        cout << "you are a male but not tall";
    }
    else if(!ismale && istall)
    {
        cout << "you are a tall but not male";
    }
    else
    {
        cout << "you are not tall male";
    }

    return 0;
}
