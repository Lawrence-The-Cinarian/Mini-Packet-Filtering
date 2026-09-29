#include <stdio.h>

typedef struct
{
  int priority[10][10];
  int serialNo[10][4];
} Packet;

int main(void)
{
  Packet indiv;
  char name[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
  for(int i = 0; i < 10; i++)
  {
    printf("Enter serial number for packet %s: ", name[i]);
    scanf("%d", &indiv[i].serialNo);
    printf("Enter priority number for packet %s: ", name[i]);
    scanf("%d", &indiv[i].priority);
    puts("");
  }
  
  for(int u = 0; u < 9; u++)
  {
    for(int v = 0; v < 9 - u; v++)
    {
      if(v < v+1)
      {
        int temp = indiv[v].priority;
        indiv[v].priority = indiv[v+1].priority;
        indiv[v+1].priority = temp;
      }
    }
  }
  puts("");
  for(int i = 0; i < 10; i++)
  {
    printf("Packet: %s", name[i]);
    printf("Serial Number: %d", indiv[i].serialNo);
    printf("Priority Number: %d", indiv[i].priority);
    puts("");
  }
  
  return 0;
}
