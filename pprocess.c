#include <stdio.h>
#include <unistd.h>
/*
* C program to get process Id and Parent process
*/
int main()
{
    int p_id, p_pid;

    p_id = getpid(); /*process id*/
    p_pid = getpid(); /*parent process id*/

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);

    return 0;
}
