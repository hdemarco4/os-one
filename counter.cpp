#include <iostream>
#include <string>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <main>

using namespace std;

int counter(string x)
{
    int n;
    int num = 0;
    int pid = getpid();
    

    n = stoi (x); 

    for(int c = 0; c < n; c++)
    {
        num = num + 1;

        cout << "Process: " << pid << " " << num << '\n';
    }

    exit(num);
    return 0;
}
