#ifndef __NET_COMMU_H__
#define __NET_COMMU_H__

#include <stdint.h>

class net_commu
{
public:
    virtual int send_data(const char* data, int datalen, int cmdid) = 0;
};

#endif
