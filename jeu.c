#include <stdio.h>

// nombre de PV
int pvmonstrefonction(int pvAffichable) {
  printf("Nombre de PV du monstre : ");
  printf("%d", pvAffichable);
  printf("\n");
}

// attaque
int attaquefonction(int pvAffichable, int attaqueAffichable) {
  printf("L'attaque est lancee, elle fait 50 de degats !\n");
  pvAffichable = pvAffichable - 50;
  pvmonstrefonction(pvAffichable);
}


// code
int main() {

  int pvmonstre = 500 ;
  int attaque = 50;

  pvmonstrefonction(pvmonstre);

  do {
    attaquefonction(pvmonstre, attaque);
  } while (pvmonstre >= 0);


  return 0;
}
