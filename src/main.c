#include "../libpac/packet.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  Packet arranger[10];
  char symbol = '\0';
  do
  {
   print();
   enterPackets(arranger);
   rearrangePackets(arranger);
   printAndStore(arranger);
   printf("Would you like to continue? Y[es] or N[o]: ");
   scanf(" %c", &symbol);
   if(!(symbol == 'Y' || symbol == 'y'))
   {
    break;
   }
  }
  while(true);
  return 0;
}
