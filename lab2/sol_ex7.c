#include <stdio.h>
#include <stdlib.h>

double *calcularMediaAlumnos(double a1[],double a2[],double a3[],double a4[],double a5[],double medias[],int n);
double calcularMediaClase(double a1[],double a2[],double a3[],double a4[],double a5[],int n);
double mediaAsignatura(double a1[],int n);
void shell(double a[],int n);

int main()
{
    double x[]={4.8,4.6,4.7,4.5};
    double y[]={4.8,4.6,4.7,4.5};
    double z[]={4.8,4.6,4.7,4.5};
    double w[]={4.8,4.6,4.7,4.5};
    double v[]={4.8,4.6,4.7,4.5};
    double medias[4];
    double *p = calcularMediaAlumnos(x,y,z,w,v,medias,4);
    printf("Para el alumno 1 la media es: %lf \n Para el alumno 2 la media es: %lf  \n Para el alumno 3 la media es: %lf  \n para el alumn 4 la media es: %lf \n",*p,*(p+1),*(p+2),*(p+3));
    shell(p,4);
    printf("Vector  de medias por alumno ordenado: \n posicion 1 %lf \n Posicion 2 %lf  \n Posicion 3 %lf  \n Posicion 4 %lf \n",*p,*(p+1),*(p+2),*(p+3));
    double mediaAsig1=mediaAsignatura(x,4);
    double mediaAsig2=mediaAsignatura(y,4);
    double mediaAsig3=mediaAsignatura(z,4);
    double mediaAsig4=mediaAsignatura(w,4);
    double mediaAsig5=mediaAsignatura(v,4);
    printf("Para la asignatura 1 la media es: %lf \n Para la asignatura 2 la media es: %lf \n Para la asignatura 3 la media es: %lf \n Para la asignatura 4 la media es: %lf \n Para la asignatura 5 la media es: %lf \n",mediaAsig1,mediaAsig2,mediaAsig3,mediaAsig4,mediaAsig5);
    double mediaClase=calcularMediaClase(x,y,z,w,v,4);
    printf("la media total de la clase es: %lf",mediaClase);
    
    //shell(x,4);
    //printf("%lf",x[0]);
}
double calcularMediaClase(double a1[],double a2[],double a3[],double a4[],double a5[],int n){
    int i;
    double suma=0;
    for(i=0;i<n;i++){
        suma+=a1[i]+a2[i]+a3[i]+a4[i]+a5[i];
    }
    //printf("El promedio de la clase es: %lf",suma/(n*5));
    return suma/(n*5);
}

double *calcularMediaAlumnos(double a1[],double a2[],double a3[],double a4[],double a5[],double medias[],int n){
    int i;
    double suma=0;
    for(i=0;i<n;i++){
        suma=a1[i]+a2[i]+a3[i]+a4[i]+a5[i];
        medias[i]=suma/5;
        suma=0;
    }
    return medias;
}

double mediaAsignatura(double a1[],int n){
    int i;
    double suma=0;
    for(i=0;i<n;i++){
        suma+=a1[i];
    }
    //printf("La suma de la asignatura x %lf \n",suma/n);
    return suma/n;
}

void shell(double a[],int n){
    int intervalo, i,j,k;
    intervalo = n/2;
    while(intervalo>0){
        for(i=intervalo;i<n;i++){
            j=i-intervalo;
            while(j>=0){
                k=j+intervalo;
                if(a[j]<=a[k]){
                    j=-1;
                }
                else{
                    double temp;
                    temp = a[j];
                    a[j]=a[k];
                    a[k]=temp;
                    j-=intervalo;
                    }
                }
            }
            intervalo=intervalo/2;
        }
    }
