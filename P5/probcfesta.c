#include <stdio.h>
#include <math.h>

double mais_perto_do_que(int hi, int mi, int hf, int mf, int ha, int ma)
//saber se os m estao mais perto de mi ou mf;
{
  int mti = (hi * 60) + mi;//minutos do inicio do recolher;
  int mtf = (hf * 60) + mf;//minutos do fim do recolher;
  int mta = (ha * 60) + ma;//minutos em que foi apanhado;
  int mti_mta = mta - mti;//numero de minutos entre mi e ma;
  int mtf_mta = mtf - mta;//numero de minutos entre mf e ma;

  return mti_mt == mtf_mta ? mti_mta : mti_mta < mtf_mta ? mti_mta : mtf_mta;
}

double valor_multa(int m, int s)
{
  double cm = (ss)0.1;//expressão para calcular o valor da multa por minuto;
  return m <= 60 ? mcm : 60cm + valormulta(m-60, s+1);
  // se os forem menores ou iguais a 60 min fazemos m vezes a expressao cm;
  // se m for maior que 60 vamos fazer os 60 vezes o cm e sumamos á recursiva que vai tirar ao m 60
  // e adicionar 1 ao s até o m ser igual ou menor que 60 conseguindo obter assim o valor da multa;
} 

void test(void)
{
   int hi;//hora inicial do recolher;
   int mi;//min inicial do recolher;
   int hf;//hora final do recolher;
   int mf;//min final do recolher;
   int ha;//hora em que foi apanhado;
   int ma;//min em que foi apanhado;
   scanf("%d%d%d%d", &hi, &mi, &hf, &mf);
    while (scanf("%d%d", &ha, &ma) != EOF)
   {
    int m = mais_perto_do_que(hi, mi, hf, mf, ha, ma);
    //int m = minutos que a pessoa foi apanhada dentro do recolher obrigatório
    double v_m = valor_multa(m, 1);
    printf("%.2f\n", vm);
   }
}

int main(void)
{
    test();
   return 0;
}