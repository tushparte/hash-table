#include <stdlib.h>
#include <stdio.h>

#include "hash_table.h"

int main() {
  ht_hash_table* ht = ht_new();
  ht_del_hash_table(ht);
  printf("created and delete hash table\n");
  return 0;
}
