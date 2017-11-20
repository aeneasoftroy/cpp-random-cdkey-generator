#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int stringLength = sizeof(alphanum) - 1;

char genRandom()
{
    return alphanum[rand() % stringLength];
}

int main()
{
    srand(time(0));
    std::string Str;
    for(unsigned int i = 0; i < 25; ++i)
    {
    Str += genRandom();
    }
    //cout << Str << endl;
    cout << Str.substr(0, 5) << '-' << Str.substr(5, 5) << '-' << Str.substr(10, 5) << '-' << Str.substr(15, 5) << '-' << Str.substr(20, 5) << endl;
}

