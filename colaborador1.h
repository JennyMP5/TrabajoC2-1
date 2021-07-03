//Rosa Antonella Posso Becerra
void ingresar(float (*m1)[5],float(*m2)[5])
{

cout<<"Ingresar y mostrar los valores de los arreglos o matrices de 5×5:\n\n";

        cout<<"Ingrese d

/*Lleno la matriz1 usando el ciclo for que me permita recorrer la matriz e ingresar numeros con un limite de 5 filas y columnas*/

    for(int i=0; i<5; i++){

     for(int j=0; j<5; j++){

             cout<<"Introducir datos de la matriz 1 fila×fila: ";

             cin>>m1[i][j];

              }
      }
cout<<endl;




   
/*Lleno la matriz2 usando el ciclo for que me permita recorrer la matriz e ingresar numeros con un limite de 5 filas y columnas*/

   for(int i=0; i<5; i++){
     for(int j=0; j<5; j++){

       cout<<"Introducir datos de la matriz 2 fila×fila: ";
       cin>>m2[i][j];
        }
     }

         

            
             

              

                 

  //imprimo la matriz1 y matriz2

    cout<<"\nLa matriz1 es::"<<endl;

    for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
        cout<<m1[i][j]<<" ";
        
     }

        cout<<endl;

    }
  

    cout<<"\nLa matriz2 es::"<<endl;

    for(int i=0; i<5; i++){
      for(int j=0; j<5; j++){
        

          cout<<m2[i][j]<<" ";

           }

      cout<<endl;

      }

  }

     

         

           





    


