//PARTICIPANTE4
//ANDREA PALACIOS
//BUENAS NOCHES PROFESOR A MI ME TOCO HACER LA TRANSPUESTA DE UNA MATRIZ
void transpuesta(float (*m1)[5], float (*r)[5])
{


cout<<endl;
cout<<"Obtener la transpuesta de una matriz";


cout<<"\nLa matriz 1 es:\n";
for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
                cout<<m1[i][j]<<" ";
        }
        cout<<"\n";
}


cout<<"\nLa transpuesta de la primera matriz es\n";

//Inicializamos la matriz t  correspondiente a la transpuesta de la primera matriz

for(int i=0;i<5;++i)
for(int j=0;j<5;++j)
r[i][j]=0;


//Generamos la matriz t

for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
                cout<<m1[j][i]<<"  ";
        }
        cout<<endl;
}




}
cout<<"Obtener la transpuesta de una matriz";
}
