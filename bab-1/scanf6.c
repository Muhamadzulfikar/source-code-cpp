#include <stdio.h>

int main() {
  char nama[30];
  
  printf("Masukkan nama: ");
  scanf("%[^\n]", nama);
  
  printf("\nNilai yang dibaca:\n");
  printf("nama = %s\n", nama);
	
  return 0;
}
