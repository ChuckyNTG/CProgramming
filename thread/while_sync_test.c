#include <stdio.h>
#include <pthread.h>

pthread_mutex_t sthread_sleepr;
pthread_cond_t while_loop_sleepr;
int x = 0;
void *while_loop()
{
    while(x == 0)
    {
        //sleep right here
        pthread_mutex_lock(&sthread_sleepr);
        printf("%d\n",x);
        pthread_cond_wait(&while_loop_sleepr,&sthread_sleepr);
        x = 1-x;
        pthread_mutex_unlock(&sthread_sleepr);
        pthread_cond_signal(&while_loop_sleepr);
        //wake up other right here
    } 

    pthread_exit(0);
}

int main()
{
    pthread_t t_while[2];

    pthread_mutex_init(&sthread_sleepr,NULL);
    pthread_cond_init(&while_loop_sleepr,NULL);

    int i;
    printf("OK!\n");
    for(i =0; i<sizeof(t_while)/sizeof(pthread_t); i++)
    {
        pthread_create(&t_while[i],NULL,&while_loop, NULL);
        pthread_join(t_while[i], NULL);
    }
    

    printf("OK!\n");
    pthread_cond_signal(&while_loop_sleepr);
}
