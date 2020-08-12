# include <stdio.h>

int main(){
    int var;
    var = 2;
    var = var + 1;
    var = 10 + 50;
    var 0 1;

//Estructura condicionales

    if ( var == 1){
        var = 2;

    }else
    {
        var = 3;
    }

    switch (var)
    {
    case 1:
        var = 10;
        break;
    case 2:
        var = 20;
        break;
    case 3:
        var = 30;
        break;    
    default:
        break;
    }

    int a = 1, acum = 10;

//Estructura repetitivas

    while (acum < 10)
    {
        acum =+ a;
        a++;
    }

    return acum;


    do
    {
        acum +=  a;
        a++;

    } while ( acum < 10)
    
    return acum
    
//Repetitivas definidas

    for (i = 0; i < 10; i++)
    {
        acum += i;
    }
    return acum;
     
}
