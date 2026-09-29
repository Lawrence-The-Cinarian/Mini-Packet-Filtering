#include <stdio.h>

typedef struct
{
  int priority;
  int serialNo;
} Packet;

int main(void)
{
  FILE *open_file;
  Packet indiv[10];
  char *name[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

   for(int i = 0; i < 10; i++)
  {
    printf("Enter serial number for packet %s: ", name[i]);
    scanf("%d", &indiv[i].serialNo);
    printf("Enter priority number for packet %s: ", name[i]);
    scanf("%d", &indiv[i].priority);
    puts("");
  }

  for(int u = 0; u < 10 - 1; u++)
  {
    for(int v = 0; v < 10 - u - 1; v++)
    {
      if(indiv[v].priority > indiv[v+1].priority)
      {
        Packet temp = indiv[v];
        indiv[v] = indiv[v+1];
        indiv[v+1] = temp;
      }
    }
  }

  open_file = fopen("main.txt", "a");
  if(open_file == NULL)
  {
  puts("Error Opening file");
  return 1;
  }
  fprintf(open_file, "----------");
  for(int i = 0; i < 10; i++)
  {
    printf("Packet %s\nSerial number: %d\nPriority number: %d\n", name[i], indiv[i].serialNo, indiv[i].priority);
    puts("");
    fprintf(open_file, "Packet %s\nSerial number: %d\nPriority number: %d\n", name[i], indiv[i].serialNo, indiv[i].priority);
    }
    fprintf(open_file, "----------");
    fclose(open_file);
    puts("Saved successfully");
  return 0;
}
