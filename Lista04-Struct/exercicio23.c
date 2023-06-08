#include <stdio.h>

typedef struct dma {
  int dia;
  int mes;
  int ano;
}dma;

int dias_do_mes(int mes, int ano) {
  switch(mes) {
    case 2:
      if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 29;
      } else {
        return 28;
      }
    case 4:
    case 6:
    case 9:
    case 11:
      return 30;
    default:
      return 31;
  }
}

int calcular_dias_decorridos(dma data1, dma data2) {
  int dias_decorridos = 0;
  int i;

  if (data1.ano > data2.ano ||
      (data1.ano == data2.ano && data1.mes > data2.mes) ||
      (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia > data2.dia)) {
    dma temp = data1;
    data1 = data2;
    data2 = temp;
  }

  if (data1.ano == data2.ano && data1.mes == data2.mes) {
    dias_decorridos += data2.dia - data1.dia;
  } else {
    dias_decorridos += dias_do_mes(data1.mes, data1.ano) - data1.dia;

    for (i = data1.mes + 1; i <= 12; i++) {
      dias_decorridos += dias_do_mes(i, data1.ano);
    }

    for (i = data1.ano + 1; i < data2.ano; i++) {
      if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
        dias_decorridos += 366;
      } else {
        dias_decorridos += 365;
      }
    }

    for (i = 1; i < data2.mes; i++) {
      dias_decorridos += dias_do_mes(i, data2.ano);
    }

    dias_decorridos += data2.dia;
  }

  return dias_decorridos;
}

int main() {
  dma data1, data2;

  printf("Digite a primeira data no formato dd/mm/aaaa: ");
  scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

  printf("Digite a segunda data no formato dd/mm/aaaa: ");
  scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

  printf("Dias decorridos entre as duas datas: %d\n", calcular_dias_decorridos(data1, data2));

  return 0;
}
