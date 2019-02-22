/*
 * Author: rossano at gmail dot com
 * Timestamp: Mon Feb 18 16:38:53 -03 2019
 *
 * This program changes the default behavior of the SIGUSR1 signal.
 * In order to accomplish this, a signal handler must me installed.
 * A signal handler can be installed invoking the function "sigaction"
 */

#include <signal.h>    // sig_atomic_t
#include <string.h>    // memset
#include <stdio.h>     // printf

sig_atomic_t counter = 0;

void my_handler(int signum) {
  ++counter;
  printf("I received signal %d\n",signum);
}

int main() {
  struct sigaction sa;
  memset(&sa, 0, sizeof(sa));
  sa.sa_handler = &my_handler; 
  sigaction(SIGUSR1, &sa, NULL);

  while(counter < 3) {}
  
  printf("I received %d SIGUSR1 signals. Terminating!!!\n", counter);
  return 0;
}

