#ifndef NETWORK_H__
#define NETWORK_H__ 

#include "wizchip_conf.h"
#include <stdbool.h>

void Network_ChipInit(void);
void Network_Task(void);
void Network_AppInit(void);
void Network_ModifyNetconf(wiz_NetInfo*);
bool Network_IsNetworkReady(void);

#endif
