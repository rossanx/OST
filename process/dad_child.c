/* dada_child.c
 * Author: rossano at gmail dot com
 * Timestamp: Mon Feb 18 15:37:22 -03 2019
 * 
 * Different parts of this program are executed by the parent and by the child.
 * It uses the fork() call to create a child. 
 */


#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  pid_t pid=0;
  printf("Parent PID is %d\n", (int) getpid());
  
  pid = fork();
  if(pid != 0) {
    printf("This is the parent process, PID is %d\n", (int) getpid());
    printf("Child PID is %d\n", (int) pid);
  } 
  else printf("This is the child process, PID is %d\n", (int) getpid());
  return 0; 
}
