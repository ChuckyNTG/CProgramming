#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("euid=%d\tuid=%d\n",geteuid(),getuid());
    chown("./gidprog.c",geteuid(),getegid());
    return 0;
}
