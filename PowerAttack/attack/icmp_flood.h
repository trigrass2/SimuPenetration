#ifndef ICMP_FLOOD_H
#define ICMP_FLOOD_H

#include "common.h"

class icmp_flood
{
public:
    icmp_flood();
    void set_sig_int();
    int do_main(char* szip);
};

#endif // ICMP_FLOOD_H
