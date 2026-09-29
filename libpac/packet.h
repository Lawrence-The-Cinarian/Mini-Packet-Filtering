#ifndef PACKET_H
#define PACKET_H

typedef struct
{
  char name = '';
  int priority;
  int serialNo;
} Packet;

void enterPackets(Packet *indiv[10]);

#endif