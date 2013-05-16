#ifdef OMAX_PD_VERSION
#define proxy_new omax_pd_proxynew
#define proxy_getinlet omax_pd_proxygetinlet

typedef struct _omax_pd_proxy{
	t_object *x;
	long inletnum;
	long *inletloc;
}t_omax_pd_proxy;

void omax_pd_class_addmethod(void *c, t_method fp, t_symbol *msg);
void omax_pd_class_addfloat(void *c, t_method fp);
void omax_pd_class_addbang(void *c, t_method fp);
t_omax_pd_proxy *omax_pd_proxynew(t_object *x, long inletnum, long *inletloc);
void omax_pd_proxydispatchanything(t_object *xx, t_symbol *msg, int argc, t_atom *argv);
void omax_pd_proxydispatchfloat(t_object *xx, double ff);
void omax_pd_proxydispatchbang(t_object *xx);

int omax_pd_proxygetinlet(t_object *xx);
#endif
