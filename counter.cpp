#include <iostream>
#include <string>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int arge, char** argv)
{
    int n;
    
    int num = 0;
    int pid = getpid();
    

    n = stoi (argv[1]); 

    for(int c = 0; c < n; c++)
    {
        num = num + 1;

        cout << "Process: " << pid << " " << num << '\n';
    }

    exit(num);
    return num;
}
