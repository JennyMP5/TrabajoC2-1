//Jenniffer Mina Preciado 
void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{
cout<<"\n Obtener el producto de las dos matrices ";

cout<<"\nLa matriz 1 es:\n";
for(int i=0;i<5;i++){
	for(int j=0; j<5;j++){
		cout<<m1[i][j]<<" ";
	}
	cout<<"\n";
}
cout<<"\nLa matriz 2 es:\n";
for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
                cout<<m2[i][j]<<" ";
        }
        cout<<"\n";
}

cout<<"El producto de las dos matrices es";

//Inicializamos la matriz c correspondiente al resultado del producto

for(int i=0;i<5;++i)
for(int j=0;j<5;++j)
r[i][j]=0;

//Generamos la matriz C que sria en estecso el resultado=r


for(int i=0;i<5;++i)
for(int j=0;j<5;++j)
for(int z=0; z<5;++z)
r[i][j]+=m1[i][z] * m2[z][j];
cout<<"Obetener el producto de las dos matrices ";
}
