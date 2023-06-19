#include <stdio.h>
struct Motor
{
int vx,vy,vz;
};
struct Dron
{
struct Motor m[4];
int x,y,z;
};
int main()
{
struct Dron d[10];

printf("Inicializando la posicion angular de los drones \n");

//Lista de posiciones angulares, cada columna corresponde a un dron
int xp[10]={1,2,3,4,5,6,7,8,9,10};
int yp[10]={1,2,3,4,5,6,7,8,9,10};
int zp[10]={1,2,3,4,5,6,7,8,9,10};

for (int i=0;i<=9;i=i+1){
    d[i].x=xp[i];
    d[i].y=yp[i];
    d[i].z=zp[i];
    printf("Posicion 'x', 'y' y 'z' del dron numero: %d\n", i+1 );
    printf("%d %d %d \n", d[i].x, d[i].y, d[i].z);
}

printf("Inicializando la velocidad angular de cada motor de cada dron \n");

//Lista de velocidades angulares por eje, cada columna corresponde a un dron y cada fila a un motor
int vxl[4][10]={{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};
int vyl[4][10]={{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};
int vzl[4][10]={{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,11}};

for (int i=0;i<=9;i=i+1){
    printf("Motores del dron numero %d\n", i+1 );
    for(int e=0;e<=3;e=e+1){
        d[i].m[e].vx=vxl[e][i];
        d[i].m[e].vy=vyl[e][i];
        d[i].m[e].vz=vzl[e][i];
        printf("Velocidad angular del eje 'x', 'y' y 'z' del motor numero %d\n", e+1 );
        printf("%d %d %d \n", d[i].m[e].vx, d[i].m[e].vy, d[i].m[e].vz);
    }
}
int s;
printf("Quiere hacer una modificacion a un dato? Escriba '1' para 'si' y '0' para 'no' \n");
scanf("%d", &s);

if (s==1){
    printf("Escriba '1' para posicion o '2' para velocidad angular de un motor \n");
    scanf("%d", &s);
    if (s==1){
        int i;
        printf("Escriba numero de dron \n");
        scanf("%d", &i);
        i=i-1;
        printf("Escriba nueva posicion en x \n");
        scanf("%d",&d[i].x);
        printf("Escriba nueva posicion en y \n");
        scanf("%d",&d[i].y);
        printf("Escriba nueva posicion en z \n");
        scanf("%d",&d[i].z);
        printf("Nueva posicion 'x', 'y' y 'z' del dron numero: %d\n", i+1 );
        printf("%d %d %d \n", d[i].x, d[i].y, d[i].z);
    }
    if (s==2){
        int i;
        int e;
        printf("Escriba numero de dron \n");
        scanf("%d", &i);
        i=i-1;
        printf("Escriba numero de motor \n");
        scanf("%d", &e);
        e=e-1;
        printf("Escriba nueva velocidad en x \n");
        scanf("%d",&d[i].m[e].vx);
        printf("Escriba nueva velocidad en y \n");
        scanf("%d",&d[i].m[e].vy);
        printf("Escriba nueva velocidad en z \n");
        scanf("%d",&d[i].m[e].vz);
        printf("Nueva velocidad angular del eje 'x', 'y' y 'z' del motor numero %d ", e+1 );
        printf(" del dron numero %d\n", i+1 );
        printf("%d %d %d \n", d[i].m[e].vx, d[i].m[e].vy, d[i].m[e].vz);
    }

}
printf("Quiere consultar un dato? Escriba '1' para 'si' y '0' para 'no' \n");
scanf("%d", &s);

if (s==1){
    printf("Escriba '1' para posicion o '2' para velocidad angular de un motor \n");
    scanf("%d", &s);
    if (s==1){
        int i;
        printf("Escriba numero de dron \n");
        scanf("%d", &i);
        i=i-1;
        printf("Posicion 'x', 'y' y 'z' del dron numero: %d\n", i+1 );
        printf("%d %d %d \n", d[i].x, d[i].y, d[i].z);
    }
    if (s==2){
        int i;
        int e;
        printf("Escriba numero de dron \n");
        scanf("%d", &i);
        i=i-1;
        printf("Escriba numero de motor \n");
        scanf("%d", &e);
        e=e-1;
        printf("Velocidad angular del eje 'x', 'y' y 'z' del motor numero %d ", e+1 );
        printf(" del dron numero %d\n", i+1 );
        printf("%d %d %d \n", d[i].m[e].vx, d[i].m[e].vy, d[i].m[e].vz);
    }

}



}
