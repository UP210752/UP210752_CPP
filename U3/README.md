# Unidad 3

<center>
<b>Bisecciones</b>
</center>
<br>
[Encuentra la raíz de una ecuación]
<pre>
double x1 =4.5;
    double x2 = -10;
    double xm;

    double Es = 0.000001;          //Error estándar o error absoluto
    double Er = abs(x2-x1);     //Error relativo 

    int i=1;

    while (Er>Es)
    {
        xm=(x1+x2)/2;
        if (fnEcuacion1(x1)*fnEcuacion1(xm) < 0)
        {
            x2=xm;
        }else{
            x1=xm;
        }
        Er=abs(x2-x1);
        i=i+1;
    }
    cout <<"i= " << i << " Raíz=" << xm << endl;
    cout << ". . . Hecho";
    double y;
    // y=fnEcuacion1(0);
    // cout << y << endl;
    return 0;
</pre><br>

<center>
<b>Salida:</b>
</center>

<img src="img/Bisecciones.png" alt="Bisecciones">
<br>  

---

<center>
<b>Función recursiva</b>
</center>
<br>
[Función recursiva que potencia una base dada por el usuario]
<pre>
int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
  if((x<1)||(x>999))
       cout<<"Ingrese un numero entre 0-999"<<endl;
  else
   
   {
 
        if(x>=900)   {cout<<"CM"   ;x=x-900; }
        if(x>=500)   {cout<<"D"    ;x=x-500; }
        if(x>=400)   {cout<<"CD"   ;x=x-400; }
        if(x>=300)   {cout<<"C"    ;x=x-100; }
        if(x>=200)   {cout<<"C"    ;x=x-100; }
        if(x>=100)   {cout<<"C"    ;x=x-100; }
        if(x>=90)    {cout<<"XC"   ;x=x-90;  }
        if(x>=50)    {cout<<"L"    ;x=x-50;  }
        if(x>=40)    {cout<<"XL"   ;x=x-40;  }
        if(x>=30)    {cout<<"X"    ;x=x-10;  }
        if(x>=20)    {cout<<"X"    ;x=x-10;  }
        if(x>=10)    {cout<<"X"    ;x=x-10;  }
        if(x>=9) {cout<<"IX"   ;x=x-9;   }
        if(x>=5) {cout<<"V"    ;x=x-5;   }
        if(x>=4) {cout<<"IV"   ;x=x-4;   }
        if(x>=3) {cout<<"III";x=x-3;     }
        if(x>=2) {cout<<"II"   ;x=x-2;   }
        if(x>=1) {cout<<"I"    ;x=x-1;   }
  
    }
   cout<<endl;
</pre><br>

<center>
<b>Salida:</b>
</center>

<img src="img/Romanos.png" alt="romanos">
<br>  

---

<center>
<b>RFC</b>
</center>
<br>
[Dado un nombre y fecha de nacimiento, te uestra el RFC]
<pre>
char apellidoP[100], apellidoM[100], Nombre[100], rfc[100], year[100]; 
    cout<<"Ingresa el apellido paterno"<<endl; 
    cin>>apellidoP; 
    cout<<"Ingresa el apellido materno "<<endl; 
    cin>>apellidoM; 
    cout<<"Ingrese solo su primer nombre "<<endl; 
    cin>>Nombre; 
    cout<<"Ingresa tu fecha de nacimiento"<<endl;  
    cin>>year; 
     
    rfc[0] = apellidoP[0]; 
    rfc[1] = apellidoP[1];
    rfc[2] = apellidoM[0]; 
    rfc[3] = Nombre[0]; 
    strcat(apellidoP, apellidoM);
    strcat(apellidoM, Name);
    strcat(Name, year);

    cout<<rfc<<year<<endl;

    return 0; 
</pre><br>

<center>
<b>Salida:</b>
</center>

<img src="img/RFC.png" alt="RFC">
<br>  

---

<center>
<b>Función recursiva</b>
</center>
<br>
[Función recursiva que potencia una base dada por el usuario]
<pre>
long int potencia(int base,int e){
    if(e==0) return 1;
    if(e==1) return base;
    else return base*potencia(base,e-1);
}
int main( void ){
    int b,e;
    cout<<"Ingrese la base"<<endl;
    cin>>b;

    do{
            cout<<"Ingrese un exponente";
            cin>>e;
    }while(e<0);
    cout<<endl;
    cout<<"Base:"<<b<<endl;
    cout<<"Exp:"<<e<<endl;
    cout<<"Resultado:"<<potencia(b,e)<<endl<<endl;

    return 0;
}
</pre><br>

<center>
<b>Salida:</b>
</center>

<img src="img/recursiva.png" alt="recursiva">
<br>  

---