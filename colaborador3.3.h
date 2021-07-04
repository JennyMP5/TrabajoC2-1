//zambrano zambrano arely
void potencia(float (*m1)[5], int p, float (*r)[5])

{

cout<<"Calcular la potencia p de una ";
  cout<<"\nLa matriz 1 es:\n";
for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
                cout<<m1[i][j]<<" ";
        }
        cout<<"\n";
}
p=2;

cout<<"La potencia "<<p<<"de la primera matriz es";

//Inicializamos la matriz p correspondiente al resultado de la potencia

for(int i=0;i<5;++i)
for(int j=0;j<5;++j)
r[i][j]=0;


//Generamos la matriz p


for(int i=0;i<5;++i)
for(int j=0;j<5;++j)
for(int z=0; z<5;++z)
r[i][j]+=m1[i][z] * m1[z][j];

}
