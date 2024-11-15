/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SUMA_2ARGS_H_RPCGEN
#define _SUMA_2ARGS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct suma_1_argument {
	int arg1;
	int arg2;
};
typedef struct suma_1_argument suma_1_argument;

struct mult_1_argument {
	int arg1;
	int arg2;
};
typedef struct mult_1_argument mult_1_argument;

#define CALC_PROG 0x20000199
#define CALC_VER 1

#if defined(__STDC__) || defined(__cplusplus)
#define suma 1
extern  int * suma_1(int , int , CLIENT *);
extern  int * suma_1_svc(int , int , struct svc_req *);
#define mult 1
extern  int * mult_1(int , int , CLIENT *);
extern  int * mult_1_svc(int , int , struct svc_req *);
extern int calc_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define suma 1
extern  int * suma_1();
extern  int * suma_1_svc();
#define mult 1
extern  int * mult_1();
extern  int * mult_1_svc();
extern int calc_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_suma_1_argument (XDR *, suma_1_argument*);
extern  bool_t xdr_mult_1_argument (XDR *, mult_1_argument*);

#else /* K&R C */
extern bool_t xdr_suma_1_argument ();
extern bool_t xdr_mult_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SUMA_2ARGS_H_RPCGEN */
