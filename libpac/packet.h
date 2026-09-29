#ifndef PACKET_H
#define PACKET_H

typedef struct
{
  int priority;
  int serialNo;
} Packet;

void print();
void enterPackets(Packet indiv[10]);
void rearrangePackets(Packet indiv[10]);
int printAndStore(Packet indiv[10]);

#endif
