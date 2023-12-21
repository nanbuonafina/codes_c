// Verifica se um número de cartão é válido e informa a bandeira; 

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long num = get_long("Digite o número do seu cartão: ");
    long dig = num;

    // contabiliza a quantidade de dígitos
    int contador = 0;
    do
    {
        dig = dig / 10;
        contador++;
    }
    while (dig != 0);

    // variaveis dig.

    long prim = 0;
    long seg = 0;
    long ter = 0;
    long qua = 0;
    long qui = 0;
    long sex = 0;
    long set = 0;
    long oit = 0;
    long non = 0;
    long dec = 0;
    long dpri = 0;
    long dseg = 0;
    long dter = 0;
    long dqua = 0;
    long dqui = 0;
    long dsex = 0;

    // variaveis que armazena a soma dos digitos.
    int somaa = 0;
    int somab = 0;
    int somac = 0;
    int somad = 0;
    int somae = 0;
    int somaf = 0;
    int somag = 0;
    int somah = 0;
    int somai = 0;
    int somaj = 0;
    int somak = 0;
    int somal = 0;
    int somam = 0;
    int soman = 0;
    int somao = 0;

    // primeiro dígito do cartão
    if (contador == 16)
    {
        prim = (num / 1000000000000000) % 10; // primeiro digito
        // printf("primeiro dígito: %li\n", prim);

        seg = (num / 100000000000000) % 10; // segundo digito
        // printf("segundo dígito: %li\n", seg);

        ter = (num / 10000000000000) % 10;
        // printf("terceiro digito: %li\n", ter);

        qua = (num / 1000000000000) % 10;
        // printf("quarto digito: %li\n", qua);

        qui = (num / 100000000000) % 10;
        // printf("quinto digito: %li\n", qui);

        sex = (num / 10000000000) % 10;
        // printf("sexto digito: %li\n", sex);

        set = (num / 1000000000) % 10;
        // printf("sétimo digito: %li\n", set);

        oit = (num / 100000000) % 10;
        // printf("oitavo digito: %li\n", oit);

        non = (num / 10000000) % 10;
        // printf("nono digito: %li\n", non);

        dec = (num / 1000000) % 10;
        // printf("decimo digito: %li\n", dec);

        dpri = (num / 100000) % 10;
        // printf("decimo primeiro digito: %li\n", dpri);

        dseg = (num / 10000) % 10;
        // printf("decimo segundo: %li\n", dseg);

        dter = (num / 1000) % 10;
        // printf("decimo terceiro: %li\n", dter);

        dqua = (num / 100) % 10;
        // printf("decimo quarto: %li\n", dqua);

        dqui = (num / 10) % 10;
        // printf("quarto digito: %li\n", dqui);

        dsex = num % 10;
        // printf("decimo sexto: %li\n", dsex);

        if (prim == 4)
        {
            printf("VISA\n");
        }
        else if (prim == 5 && seg == 1)
        {
            printf("MASTERCARD\n");
        }
        else if (prim == 5 && seg == 2)
        {
            printf("MASTERCARD\n");
        }
        else if (prim == 5 && seg == 3)
        {
            printf("MASTERCARD\n");
        }
        else if (prim == 5 && seg == 4)
        {
            printf("MASTERCARD\n");
        }
        else if (prim == 5 && seg == 5)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVÁLIDO\n");
        }

        dqui = dqui * 2;
        dter = dter * 2;
        dpri = dpri * 2;
        non = non * 2;
        set = set * 2;
        qui = qui * 2;
        ter = ter * 2;
        prim = prim * 2;

        // printf("O resultado é: %li, %li, %li, %li, %li, %li, %li, %li\n", dqui, dter, dpri, non, set, qui, ter, prim);

        if (dqui > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dqui % 10;
            // printf("%i\n", dig1);

            int dig2 = (dqui / 10) % 10;
            // printf("%i\n", dig2);

            somaa = dig1 + dig2;
            // printf("%i", somaa);
        }
        else if (dqui < 10)
        {
            somaa = dqui;
        }

        if (dter > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dter % 10;
            // printf("%i\n", dig1);

            int dig2 = (dter / 10) % 10;
            // printf("%i\n", dig2);

            somab = dig1 + dig2;
            // printf("%i", somab);
        }
        else if (dter < 10)
        {
            somab = dter;
        }

        if (dpri > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dpri % 10;
            // printf("%i\n", dig1);

            int dig2 = (dpri / 10) % 10;
            // printf("%i\n", dig2);

            somac = dig1 + dig2;
            // printf("%i", somac);
        }
        else if (dpri < 10)
        {
            somac = dpri;
        }

        if (non > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = non % 10;
            // printf("%i\n", dig1);

            int dig2 = (non / 10) % 10;
            // printf("%i\n", dig2);

            somad = dig1 + dig2;
            // printf("%i", somad);
        }
        else if (non < 10)
        {
            somad = non;
        }

        if (set > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = set % 10;
            // printf("%i\n", dig1);

            int dig2 = (set / 10) % 10;
            // printf("%i\n", dig2);

            somae = dig1 + dig2;
            // printf("%i", somae);
        }
        else if (set < 10)
        {
            somae = set;
        }

        if (qui > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = qui % 10;
            // printf("%i\n", dig1);

            int dig2 = (qui / 10) % 10;
            // printf("%i\n", dig2);

            somaf = dig1 + dig2;
            // printf("A soma é: %i\n", somaf);
        }
        else if (qui < 10)
        {
            somaf = qui;
        }

        if (ter > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = ter % 10;
            // printf("%i\n", dig1);

            int dig2 = (ter / 10) % 10;
            // printf("%i\n", dig2);

            somag = dig1 + dig2;
            // printf("%i", somag);
        }
        else if (ter < 10)
        {
            somag = ter;
        }

        if (prim > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = prim % 10;
            // printf("%i\n", dig1);

            int dig2 = (prim / 10) % 10;
            // printf("%i\n", dig2);

            somah = dig1 + dig2;
            // printf("%i", somah);
        }
        else if (prim < 10)
        {
            somah = prim;
        }

        int digs = somaa + somab + somac + somad + somae + somaf + somag + somah;
        // printf("Soma: %i\n", digs);

        int final = digs + dsex + dqua + dseg + dec + oit + sex + qua + seg;
        // printf("Soma final: %i\n", final);

        final = final % 10;

        if (final == 0)
        {
            printf("VÁLIDO\n");
        }
        else if (final != 0)
        {
            printf("INVÁLIDO\n");
        }
    }
    else if (contador == 15)
    {
        prim = (num / 100000000000000) % 10; // primeiro
        // printf("dígito: %li\n", prim);

        seg = (num / 10000000000000) % 10; // segundo
        // printf("digito: %li\n", seg);

        ter = (num / 1000000000000) % 10; // terceiro
        // printf("digito: %li\n", ter);

        qua = (num / 100000000000) % 10; // quarto
        // printf("digito: %li\n", qua);

        qui = (num / 10000000000) % 10; // quinto
        // printf("digito: %li\n", qui);

        sex = (num / 1000000000) % 10; // sexto
        // printf("digito: %li\n", sex);

        set = (num / 100000000) % 10; // setimo
        // printf("digito: %li\n", set);

        oit = (num / 10000000) % 10; // oitavo
        // printf("digito: %li\n", oit);

        non = (num / 1000000) % 10; // nono
        // printf("digito: %li\n", non);

        dec = (num / 100000) % 10; // decimo
        // printf("digito: %li\n", dec);

        dpri = (num / 10000) % 10; // d. primeiro
        // printf("digito: %li\n", dpri);

        dseg = (num / 1000) % 10; // d. segundo
        // printf("digito: %li\n", dseg);

        dter = (num / 100) % 10; // d. terceiro
        // printf("digito: %li\n", dter);

        dqua = (num / 10) % 10;
        // printf("digito: %li\n", dqua);

        dqui = num % 10;
        // printf("digito: %li\n", dqui);

        if (prim == 3 && seg == 4)
        {
            printf("AMEX\n");
        }
        else if (prim == 3 && seg == 7)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVÁLIDO\n");
        }

        dqua = dqua * 2;
        dseg = dseg * 2;
        dec = dec * 2;
        oit = oit * 2;
        sex = sex * 2;
        qua = qua * 2;
        seg = seg * 2;
        printf("O resultado é: %li, %li, %li, %li, %li, %li, %li\n", dqua, dseg, dec, oit, sex, qua, seg);

        if (dqua > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dqua % 10;
            // printf("%i\n", dig1);

            int dig2 = (dqua / 10) % 10;
            // printf("%i\n", dig2);

            somaa = dig1 + dig2;
            // printf("%i", somaa);
        }
        else if (dqua < 10)
        {
            somaa = dqua;
        }

        if (dseg > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dseg % 10;
            // printf("%i\n", dig1);

            int dig2 = (dseg / 10) % 10;
            // printf("%i\n", dig2);

            somab = dig1 + dig2;
            // printf("%i", somab);
        }
        else if (dseg < 10)
        {
            somab = dseg;
        }

        if (dec > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dec % 10;
            // printf("%i\n", dig1);

            int dig2 = (dec / 10) % 10;
            // printf("%i\n", dig2);

            somac = dig1 + dig2;
            // printf("%i", somac);
        }
        else if (dec < 10)
        {
            somac = dec;
        }

        if (oit > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = oit % 10;
            // printf("%i\n", dig1);

            int dig2 = (oit / 10) % 10;
            // printf("%i\n", dig2);

            somad = dig1 + dig2;
            // printf("%i", somad);
        }
        else if (oit < 10)
        {
            somad = oit;
        }

        if (sex > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = sex % 10;
            // printf("%i\n", dig1);

            int dig2 = (sex / 10) % 10;
            // printf("%i\n", dig2);

            somae = dig1 + dig2;
            // printf("%i", somae);
        }
        else if (sex < 10)
        {
            somae = sex;
        }

        if (qua > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = qua % 10;
            // printf("%i\n", dig1);

            int dig2 = (qua / 10) % 10;
            // printf("%i\n", dig2);

            somaf = dig1 + dig2;
            // printf("A soma é: %i\n", somaf);
        }
        else if (qua < 10)
        {
            somaf = qua;
        }

        if (seg > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = seg % 10;
            // printf("%i\n", dig1);

            int dig2 = (seg / 10) % 10;
            // printf("%i\n", dig2);

            somag = dig1 + dig2;
            // printf("%i", somag);
        }
        else if (seg < 10)
        {
            somag = seg;
        }

        int digs = somaa + somab + somac + somad + somae + somaf + somag;
        printf("Soma: %i\n", digs);

        int final = digs + dqui + dter + dpri + non + set + qui + ter + prim;
        printf("Soma final: %i\n", final);

        final = final % 10;

        if (final == 0)
        {
            printf("VÁLIDO\n");
        }
        else if (final != 0)
        {
            printf("INVÁLIDO\n");
        }
    }
    else if (contador == 13)
    {

        prim = (num / 1000000000000) % 10;
        // printf("digito: %li\n", prim);

        seg = (num / 100000000000) % 10;
        // printf("digito: %li\n", seg);

        ter = (num / 10000000000) % 10;
        // printf("digito: %li\n", ter);

        qua = (num / 1000000000) % 10;
        // printf("digito: %li\n", qua);

        qui = (num / 100000000) % 10;
        // printf("digito: %li\n", qui);

        sex = (num / 10000000) % 10;
        // printf("digito: %li\n", sex);

        set = (num / 1000000) % 10;
        // printf("digito: %li\n", set);

        oit = (num / 100000) % 10;
        // printf("digito: %li\n", oit);

        non = (num / 10000) % 10;
        // printf("digito: %li\n", non);

        dec = (num / 1000) % 10;
        // printf("digito: %li\n", dec);

        dpri = (num / 100) % 10;
        // printf("digito: %li\n", dpri);

        dseg = (num / 10) % 10;
        // printf("digito: %li\n", dseg);

        dter = num % 10;
        // printf("digito: %li\n", dter);

        if (prim == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVÁLIDO\n");
        }

        dseg = dseg * 2;
        dec = dec * 2;
        oit = oit * 2;
        sex = sex * 2;
        qua = qua * 2;
        seg = seg * 2;
        printf("O resultado é: %li, %li, %li, %li, %li, %li\n", dseg, dec, oit, sex, qua, seg);

        if (dseg > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dseg % 10;
            // printf("%i\n", dig1);

            int dig2 = (dseg / 10) % 10;
            // printf("%i\n", dig2);

            somaa = dig1 + dig2;
            // printf("%i", somab);
        }
        else if (dseg < 10)
        {
            somaa = dseg;
        }

        if (dec > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = dec % 10;
            // printf("%i\n", dig1);

            int dig2 = (dec / 10) % 10;
            // printf("%i\n", dig2);

            somab = dig1 + dig2;
            // printf("%i", somac);
        }
        else if (dec < 10)
        {
            somab = dec;
        }

        if (oit > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = oit % 10;
            // printf("%i\n", dig1);

            int dig2 = (oit / 10) % 10;
            // printf("%i\n", dig2);

            somac = dig1 + dig2;
            // printf("%i", somad);
        }
        else if (oit < 10)
        {
            somac = oit;
        }

        if (sex > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = sex % 10;
            // printf("%i\n", dig1);

            int dig2 = (sex / 10) % 10;
            // printf("%i\n", dig2);

            somad = dig1 + dig2;
            // printf("%i", somae);
        }
        else if (sex < 10)
        {
            somad = sex;
        }

        if (qua > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = qua % 10;
            // printf("%i\n", dig1);

            int dig2 = (qua / 10) % 10;
            // printf("%i\n", dig2);

            somae = dig1 + dig2;
            // printf("A soma é: %i\n", somaf);
        }
        else if (qua < 10)
        {
            somae = qua;
        }

        if (seg > 10) // verifica se tem dois dígitos p separar e somar
        {
            int dig1 = seg % 10;
            // printf("%i\n", dig1);

            int dig2 = (seg / 10) % 10;
            // printf("%i\n", dig2);

            somaf = dig1 + dig2;
            // printf("%i", somag);
        }
        else if (seg < 10)
        {
            somaf = seg;
        }

        int digs = somaa + somab + somac + somad + somae + somaf;
        printf("Soma: %i\n", digs);

        int final = digs + dter + dpri + non + set + qui + ter + prim;
        printf("Soma final: %i\n", final);

        final = final % 10;

        if (final == 0)
        {
            printf("VÁLIDO\n");
        }
        else if (final != 0)
        {
            printf("INVÁLIDO\n");
        }
    }
    else
    {
        printf("INVÁLIDO\n");
    }

}
