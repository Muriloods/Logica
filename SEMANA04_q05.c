/* #include <stdio.h>

int main(void) {
  float a, b, c, maior, menor, meio;
  scanf("%f%f%f", &a, &b, &c);
  
  if(a == b && b == c)
  {
    printf("EQUILATERO\n");
  }
  else
  {
    maior = a > b && a > c ? a : b > a && b > c ? b : c;
    menor = a <= b && a <= c ? a : b <= a && b <= c ? b : c;
    meio = a <= b && a <= c && b <= c ? b : b <= a && b <= c && a <= c ? a : c;

    if(!((menor + meio) > maior))
    {
      printf("NAO FORMA\n");
    }
    else
    {
      if(a == b || a == c || b == c)
      {
        printf("ISÓSCELES\n");
      }
      else
      {
        printf("ESCALENO\n");
      }
    }
  }

  return 0;
} */