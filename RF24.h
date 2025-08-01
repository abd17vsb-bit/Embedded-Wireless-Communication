#ifndef NRF24_H
#define NRF24_H

void NRF24_Init();
void NRF24_WriteReg(unsigned char reg, unsigned char value);
void NRF24_SendPayload(char *data);
void NRF24_ReadPayload(char *data);

#endif
