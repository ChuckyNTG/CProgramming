#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

#define PAGE_SIZE 16
#define NUM_PAGES 32

typedef struct _Page
{
    char *info;
    __u_int page_number;
    __u_int size;
    
}Page;

typedef struct _Cache
{
    __u_int size;
    Queue * pages; //Some FIFO
}Cache;


Page * newPage(int page_number,char *info)
{
    Page * new_page = malloc(sizeof(Page));
    new_page->page_number = page_number;
    new_page->size = PAGE_SIZE;
    new_page->info = info;
    return new_page;
} 

void printCache(Cache * c)
{
    Node * cur_head = c->pages->head;
    for(int i = 0;i<c->size;i++)
    {
        printf("%d:Page %d\tAddr:%p\tNext:%p\n",i,((Page *)(cur_head->ptr))->page_number,cur_head,cur_head->next);
        cur_head = cur_head->next;
    }
}

int main(int argc, char *argv[])
{
    Cache *cache = malloc(sizeof(Cache));
    cache->size = 0;
    cache->pages = malloc(sizeof(Queue));
    

    int add_page=1;
    while(add_page != 99)
    {
        scanf("%d",&add_page);
        if(add_page>0)
        {
            char info[8];
            sprintf(info,"Page %d",add_page);
            append(cache->pages,newPage(add_page,info));
            cache->size++;
        }
        else
           printCache(cache);
             
    }

    free(cache->pages);
    free(cache);
    return 0;
} 
