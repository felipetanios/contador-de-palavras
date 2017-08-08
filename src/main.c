/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c = 1;
  int counter = 0;
  int ponto;
  int flag;

  while (c != '\n') {
    ponto = 1;
    flag = 1;
    scanf("%c", &c);
  
    //se esta numa palavra
    if ((c >= 'A' && c <='Z') || (c >= 'a' && c <= 'z')){
      counter++;
      //vai ateh o final dela
      while ((c >= 'A' && c <='Z') || (c >= 'a' && c <= 'z') || (c>= '0' && c <='9')){
        scanf("%c", &c);
      }
    }

    //se esta num numero
    else if (c>= '0' && c <='9'){
      counter++;
      //vai ateh o final dele
      while((c>= '0' && c <='9') || ((c =='.'||c ==',') && flag)) {
        scanf("%c", &c);
        //se eh o primeiro ponto no numero
        if ((c =='.'||c ==',') && ponto){
          ponto = 0;
        }
        //se eh o segundo ponto no numero
        else if ((c =='.'||c ==',') && !ponto){
          flag = 0;
        }
      }
    }

    //acabou uma palavra
  }

  printf("%d\n", counter);
  return 0;
}
