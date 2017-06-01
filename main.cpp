#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <sys/wait.h>

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
        cout << "Child PID: " << getpid() << '\n';
        num = execl("./counter", "counter", "5", (char*)NULL);

    }
    else{
        cout << "Parent PID: " << pid << '\n';
    }

    int status =  waitpid(f, &status, 0);
    cout << "Process " << f << " exited with status: " << num << '\n';

}

