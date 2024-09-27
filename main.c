#include <stdio.h>

int main(void)
{
    float prezzoUni, importoNoSconto, importo, sconto;
    int numeroProdotti;
    printf("Inserisci il numero di prodotti: ");
    scanf("%d", &numeroProdotti);
    printf("inserisci il prezzo unitario: ");
    scanf("%f", &prezzoUni);
    importoNoSconto = numeroProdotti * prezzoUni;
    if (importoNoSconto > 10)
    {
        sconto=importoNoSconto * 0.10;
        importo = importoNoSconto - sconto;
    }
    if (importoNoSconto > 50)
    {
        sconto=importoNoSconto * 0.20;
        importo=importoNoSconto - sconto;
    }
    else (importo == importoNoSconto);
    sconto = importoNoSconto - importo;
    printf ("l'importo non scontato e' uguale a: %f", importoNoSconto);
    printf ("l'importo scontato e' uguale a: %f", importo);
    printf ("lo sconto e' di %f euro", sconto);
    return 0;

}
