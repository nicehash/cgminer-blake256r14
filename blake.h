#ifndef BLAKE_H
#define BLAKE_H

#include "miner.h"

extern int blake256_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce);
extern void blake256_regenhash(struct work *work);

#endif /* BLAKE_H */