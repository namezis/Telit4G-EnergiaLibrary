#ifndef I2C_WIRE_LIB_H
#define I2C_WIRE_LIB_H

#include "Energia.h"

void I2CWriteRead(uint8_t devAddr, const void *pCmd, uint16_t cmdLen,
                  void *pRdBuff, uint16_t rdBuffLen);

void I2CWriteWrite(uint8_t devAddr, const void *pCmd, uint16_t cmdLen,
                   void *pWrBuff, uint16_t wrBuffLen);

#endif