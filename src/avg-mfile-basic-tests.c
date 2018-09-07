
#include <stdio.h>
#include "avg.h"
#include "utst.h"

int main()
{
  UTST_BEGIN();

  UTST_ASSERT_INT_EQ( avg( 10, 20 ), 15 );

  UTST_END();
  return 0;
}

