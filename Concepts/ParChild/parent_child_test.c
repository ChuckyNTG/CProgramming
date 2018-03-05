#include<unistd.h>
#include<stdio.h>

int main()
{
    pid_t value1 = fork();
    pid_t value2 = fork();

    if(value1 == 0)
    {
        if(value2 == 0)
            printf("Child of %d Reporting and new Child\n",value1);
        else
            printf("Child of %d and Parent %d Reporting\n",value1,value2);
    }
    else
    {
        if(value2==0)
            printf("Parent of %d Reporting and new Child\n",value1);
        else
             printf("Parent of %d Reporting\n",value1);      
    }
}


