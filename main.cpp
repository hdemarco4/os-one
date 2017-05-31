#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int arge, char** argv)
{
    int pid = getpid();
    int f;
    int num;

    if ((f = fork()) < 0){
        perror("Error");

    }
    else if (f == 0){
        cout << "Child PID: " << f << '\n';
        execl("./counter", "counter", 5, (char*)0);

    }
    else{
        cout << "Parent PID: " << pid << '\n';
    }

    pid_t wait(int num);
    cout << "Process " << f << " exited with status: " << num;

}

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
