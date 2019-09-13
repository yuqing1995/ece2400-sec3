
#include <stdio.h>
#include "avg.h"
#include "utst.h"

int main()
{
  UTST_ASSERT_INT_EQ( avg( 10, 20 ), 15 );
  return 0;
}

