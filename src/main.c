#include "../libpac/packet.h"
#include <stdio.h>


int main(void)
{
  Packet arranger[10];

  enterPackets(&arranger[10]);
  rearrangePackets(&arranger[10]);
  printAndStore(&arranger[10]);

  return 0;
}
