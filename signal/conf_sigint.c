/*
 * Author: rossano at gmail dot com
 * Timestamp: Mon Feb 18 16:38:53 -03 2019
 *
 * This program changes the behavior of the SIGINT signal.
 * In order to accomplish this, a signal handler must me installed.
 * A signal handler can be installed invoking the function "signal".
 * WARNING: Note that the "signal" man page advises the use of the 
 *          function "sigaction" instead of the "signal".
 * I offer another example with the function sigaction (sigusr1.c).
 */

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void my_sigint_handler()
{
  int c;
  printf("Are you sure you want to terminate the program [y/n]?");
  c = getchar();

  if(c == 'y')
    exit(0);
}

int main(int argc, char **argv)
{
  int i;

  signal(SIGINT, my_sigint_handler);

  while(1) {}

  return 0;
}

