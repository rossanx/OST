/* threads.c
 * Author: rossano at gmail dot com
 * Timestamp: Mon Feb 18 15:37:22 -03 2019
 * 
 * This program creates 3 threads + the main thread and runs forever.
 *  
 */


#include <pthread.h> 
#include <stdio.h>
#include <unistd.h>

void *func1(void *uu)
{
  while(1) {printf("func1 - %i\n",getpid());}
  return NULL;
}

void *func2(void *uu)
{
  while(1) {printf("func2 - %i\n",getpid());}
  return NULL;
}

void *func3(void *uu)
{
  while(1) {printf("func3 - %i\n",getpid());}
  return NULL;
}

int main()
{
  pthread_t t1, t2, t3;

  pthread_create(&t1, NULL, &func1, &"x");
  pthread_create(&t2, NULL, &func2, &"x");
  pthread_create(&t3, NULL, &func3, &"x");

  while(1) {printf("Main - %i\n",getpid());}

  return 0;
}

