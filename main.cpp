#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

#include "math.h"


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
    fflush(stdout); 
    printf("Hello, %d\n", subtract(2,2));
    fflush(stdout); 
}
