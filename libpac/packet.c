#include "packet.h"
#include <stdio.h>

void enterPackets(Packet *indiv[10])
{
   indiv->priority = 0;
   indiv->serialNo = 0;
   indiv[10]->packetLetter = {"A", "B", "C", "D", E"", "F", "G", "H", "I", "J"};
   
   for(int i = 0; i < 10; i++)
   {
      printf("Enter serial number for packet %s: ", indiv[i]->name);
      scanf("%d", &indiv->serialNo);
      printf("Enter the priority for packet %s: ", indiv[i]->name);
      scanf("%d", &indiv->priority);
   }
   
}
