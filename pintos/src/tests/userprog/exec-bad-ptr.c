/* Passes an invalid pointer to the exec system call.
   The process must be terminated with -1 exit code. */

#include <syscall.h>
#include "tests/main.h"
#include "tests/userprog/sample.inc"

void
test_main (void) 
{
check_file ("sample.txt", sample, sizeof sample - 1);
  exec ((char *) 0x20101234);
}
