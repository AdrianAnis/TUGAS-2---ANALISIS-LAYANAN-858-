#include <stdio.h>
#include <string.h>

/* Data simulasi */
long saldo = 50000;
int masa_aktif = 30;      /* hari */
char auto_tp_no[16] = ""; /* nomor Auto TP tersimpan */
long auto_tp_nom = 0;     /* nominal Auto TP */
int kupon = 3;            /* jumlah kupon undian */
#define BIAYA 200

int main()
{
    char dial[10];
    int menu, konfirmasi;
    char no_tujuan[16];
    long nominal;

    printf("\n-- Transfer Pulsa --\n");
    printf("No. tujuan : ");
    scanf("%s", no_tujuan);
    printf("Nominal    : Rp ");
    scanf("%ld", &nominal);

    if (nominal < 2000 || nominal > 1000000)
    {
        printf("GAGAL: Nominal Rp2.000 - Rp1.000.000\n");
        return 0;
    }

    printf("\nKirim Rp.%ld ke %s?\n", nominal, no_tujuan);
    printf("Biaya: Rp.%d\n", BIAYA);
    printf("1. Ya  2. Tidak\nPilih: ");
    scanf("%d", &konfirmasi);

    if (konfirmasi == 1)
    {
        if (saldo < nominal + BIAYA)
        {
            printf("GAGAL: Saldo tidak cukup.\n");
        }
        else
        {
            saldo -= (nominal + BIAYA);
            printf("SUKSES! Saldo: Rp.%ld\n", saldo);
            printf("[SMS ke %s] Kamu terima pulsa Rp.%ld\n",
                   no_tujuan, nominal);
        }
    }
    else
    {
        printf("Transfer dibatalkan.\n");
    }
}
