#include <stdio.h>
#include "hello.h" /* is generated by rpcgen from hello.x  */

int *print_hello_1_svc(void *filler, struct svc_req *req)
{
   static int ok;
   ok = printf("\nServer : Hello, world.\n");
   return (&ok);
}
