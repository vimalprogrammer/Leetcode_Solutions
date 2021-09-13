#include <bits/stdc++.h>
using namespace std;

void eraseAllSubStr(string & mainStr, const string & toErase)
{
    size_t pos = string::npos; // npos is a constant of type size_t with the value of -1. 
                               // npos - It actually means until the end of the string.
    // Search for the substring in string in a loop untill nothing is found
    while ((pos=mainStr.find(toErase))!= string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
    }
}


int main()
{
    string str = "4523EF58G";
    vector<string>strList={"EF","56","7","G"};
    for (auto it = strList.begin(); it != strList.end(); it++)
    {
        eraseAllSubStr(str, *it);
    }
    cout << str << endl;
    return 0;
}