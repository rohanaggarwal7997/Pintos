/* Opens a file whose name spans the boundary between two pages.
   This is valid, so it must succeed. */

#include <syscall.h>
#include "tests/userprog/boundary.h"
#include "tests/lib.h"
#include "tests/main.h"

void
test_main (void) 
{
  msg ("create(NULL): %d", create (NULL, 0));
  msg ("create(\"quux.dat\"): %d",
       create (copy_string_across_boundary ("quux.dat"), 0));
}
