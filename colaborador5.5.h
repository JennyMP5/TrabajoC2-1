void mediayvarianza(float (*m1)[5], float (*m2)[])
{

cout<<"\nDeterminar  cual de las 2 matrices tiene la mayor media y varianza\n";


//declaro las variables que voy a usar

        float media1=0, media2=0, varianza1=0, varianza2=0;

        int n;

n=25;

/*n: representa al número de elementos, en este caso son 25 elementos porque es una matriz de 5×5*/

//la variable n me servira para la formula de media y varianza

                                                                                                                                                                               
  

//Presento por pantalla la matriz1

cout<<"\nLa matriz 1 es:\n";

for(int i=0;i<5;i++){

        for(int j=0; j<5;j++){

                cout<<m1[i][j]<<" ";

        }

        cout<<"\n";

}
  

/*Calculo la media de la primera matriz recorriendo la matriz con un bucle for para que se sumen todos sus elementos y despues se dividan para el numero de elementos n*/

for (int i=0;i<5;i++){

        for(int j=0;j<5;j++){

                media1+=(m1[i][j])/n;

        }

}

cout<<"\nLa media de la matriz 1 es : \n"<<media1;
  

/*Calculo la varianza de la primera matriz con un bucle for que me permite restar cada elemento con la media, despues se multiplique por si misma y por ultimo se divida para el

numero de elementos n*/

for (int i=0;i<5;i++){

        for(int j=0;j<5;j++){

                varianza1+=(m1[i][j]-media1)*(m1[i][j]-media1)/n;

                }

}

cout<<"\nLa varianza de la matriz 1 es: "<<varianza1;

cout<<endl;
  
  

//Presento por pantalla la matriz2

cout<<"\nLa matriz 2 es:\n";

for(int i=0;i<5;i++){

        for(int j=0; j<5;j++){

                cout<<m2[i][j]<<" ";

        }

        cout<<"\n";

}

  
/*Calculo la media de la segunda matriz recorriendo la matriz con un bucle for para que se sumen todos sus elementos y despues se dividan para el numero de elementos n*/

for (int i=0;i<5;i++){

        for(int j=0;j<5;j++){

                media2+=(m2[i][j])/n;

        }

}

cout<<"\nLa media de la matriz 2 es : \n"<<media2;

cout<<endl;
  

/*Calculo la varianza de la segunda matriz con un bucle for que me permite restar cada elemento con la media, se multiplique por si misma, se sumen y por ultimo se divida para el

numero de elementos n*/

for (int i=0;i<5;i++){

        for(int j=0;j<5;j++){

                varianza2+=(m2[i][j]-media2)*(m2[i][j]-media2)/n;

                }

}

cout<<"\nLa varianza de la matriz 2 es: "<<varianza2;

cout<<endl;
  

/*A continuacion se compara la media de la matriz1 y la matriz2 con una estrucctura condicional if-else que me permita saber cual es mayor*/

cout<<"____________________________________________________________________\n";

if(media1>media2){

        cout<<"\n//  La matriz 1 tiene la mayor media: "<<media1<<"  //";

        cout<<endl;

}

else{

        cout<<"\n//La matriz 2 tiene la mayor media: "<<media2<<"  //";;

        cout<<endl;

}

cout<<"____________________________________________________________________\n";

cout<<endl<<endl;

  
/*A continuacion se compara la varianza de la matriz1 y la matriz2 con una estrucctura condicional if-else que me permita saber cual es mayor*/

cout<<"____________________________________________________________________\n";

                                                                                                                                                                                
  if(varianza1>varianza2){

        cout<<"\n//  La matriz 1 tiene la mayor varianza: "<<varianza1<<"  //";

        cout<<endl;

}

else{

        cout<<"\n//  La matriz 2 tiene la mayor varianza: "<<varianza2<<"  //";

        cout<<endl;

}

cout<<"____________________________________________________________________\n";

}
  




}
