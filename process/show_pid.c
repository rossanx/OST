/* show_pid.c
 * Author: rossano at gmail dot com
 * Timestamp: Mon Feb 18 15:37:22 -03 2019
 * 
 * This program shows the PID of the current process and it's parent's. 
 */


#include <stdio.h>
#include <unistd.h>

int main() {
  printf("This process PID is %d\n", (int) getpid());
  printf("This process PPID is %d\n", (int) getppid());
  return 0; 
}
