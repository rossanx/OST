/*
 * Author: rossano at gmail dot com
 * Timestamp: Mon Feb 18 15:37:22 -03 2019
 */

#include <stdio.h>     // printf
#include <stdlib.h>    // atoi
#include <sys/types.h> // pid_t type definition used in kill syscall
#include <signal.h>    // kill syscall

int main(int argc, char **argv) {

  int sig=0;
  int pid=0;
  int err=0;

  if (argc < 2) {
    printf("Usage: %s SIGNAL_NUMBER PID\n",argv[0]);
    exit(0);
  }
  
  sig=(int)atoi(argv[1]);
  pid=(int)atoi(argv[2]);

  err=kill(pid, sig);

  if (err != 0)
    printf("Error! kill returned a value != 0\n");

  return ret;
}
