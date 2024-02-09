#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

#include "add.h"


using namespace std;


int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cout << endl;
    printf("Hello, %d\n", add(1,2));
    printf("Hello, %d\n", add(2,2));
}
