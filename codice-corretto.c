#include <stdio.h>
#include <ctype.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() {
    char scelta = '\0';
    menu();
    scanf(" %c", &scelta);
    scelta=toupper(scelta);
    switch (scelta) {
        case 'A':
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
        default:
            printf("Opzione non prevista");
    }

    return 0;
}

void menu() {
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica() {
    short int a, b;
    printf("Inserisci i due numeri da moltiplicare:");
    scanf("%hd %hd", &a, &b);

    short int prodotto = a * b;

    printf("Il prodotto tra %hd e %hd e': %hd\n", a, b, prodotto);
}

void dividi() {
    int a, b;
    printf("Inserisci il numeratore:");
    scanf("%d", &a);
    printf("Inserisci il denominatore:");
    scanf("%d", &b);
    if (b == 0) {
        printf("Errore: divisione per zero.\n");
        return;
    }

    int divisione = a / b;

    printf("La divisione tra %d e %d e': %d\n", a, b, divisione);
}

void ins_string() {
    char stringa[11]; 

    printf("Inserisci la stringa: ");
    getchar();
    scanf("%10[^\n]", stringa);

    printf("Hai inserito: %s\n", stringa);
}

