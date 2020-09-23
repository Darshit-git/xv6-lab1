#include "types.h"
#include "stat.h"
#include "user.h"


int main(void)
{

 void *buffer = malloc(3000);
 wolfie(buffer,3000);

 printf(1,"%s\n",(char *)buffer);

 return 0;
}
