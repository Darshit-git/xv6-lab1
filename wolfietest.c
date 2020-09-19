#include "types.h"
#include "stat.h"
#include "user.h"


int main(void)
{

 void *buf = malloc(3000);
 int x = wolfie(buf,3000);

 printf(1,"%d\n",x);

 return 0;
}
