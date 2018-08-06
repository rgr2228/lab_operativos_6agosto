#include <stdio.h>
#include <stdlib.h>

int comision(int venta);

int main()
{
    int res;
    res = comision(20000);
    printf("Su comision es de= %d\n", res);
    res = comision(20001);
    printf("Su comision es de= %d\n", res);
    res = comision(30000);
    printf("Su comision es de= %d\n", res);
    res = comision(50000);
    printf("Su comision es de= %d\n", res);
    res = comision(50001);
    printf("Su comision es de= %d\n", res);
    res = comision(75000);
    printf("Su comision es de= %d\n", res);
    res = comision(-3);
    printf("Su comision es de= %d\n", res);
    return 0;
}

int comision(int venta){
    printf("La venta es de:%d\n",venta);
    int valor = 0;
    if(venta>=0 && venta<=20000){
        valor = (venta*0.05);
        return valor;
    }else if(venta>=20001 && venta<=50000){
        valor = ((venta-20000)*0.07+1000);
        return valor;
    }else if(venta>=50001){
        valor = ((venta-50000)*0.10+3100);
        return valor;
    }else{
        printf("El valor ingresado no es correcto\n");
        return valor;
    }
}
