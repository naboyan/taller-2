#include <iostream>
#include <malloc.h>
using namespace std;
/*
    AUTORES  /  semestre 3 Diurno
    
    Jhon Neiver Valencia Grueso
    Jorge Enrique Segura Rodriguez 
    Juan Camilo Angulo Naboyan
*/
struct paciente{
    int val=0;
    char nombre[30];
    float tiempo =0.0;
    float tiempo2=0.0;
    float tiempo3=0.0;
    float promedio;
    paciente *sig;
};

paciente *cab, *aux, *aux2 ;

int registrar(){
     cout<<"REGISTRADOR DE CORREDORES"<<endl;
     cout<<"--------------------------"<<endl;

    if(cab==NULL){
        cab=(struct paciente*)malloc(sizeof(struct paciente));
        cout<<"Introduzca el documento de corredor: ";
        cin>>cab->val;
        cout<<"Introduzca el nombre de corredor: ";
        cin>>cab->nombre;
        cout<<endl;
         cout<<"REGISTRADOR DE VUELTAS"<<endl;
         cout<<"--------------------------"<<endl;
        cout<<"vuelta 1: " <<endl;
        cout<<"-->";
        cin>>cab->tiempo;
        cout<<"vuelta 2: "<<endl;
        cout<<"-->";
        cin>>cab->tiempo2;
        cout<<"vuelta 3: "<<endl;
        cout<<"-->";
        cin>>cab->tiempo3;
        
      cab->promedio=cab->tiempo+cab->tiempo2+cab->tiempo3/3;
       
        cab->sig = NULL;
    }
    else
        {
            aux = (struct paciente*)malloc(sizeof(struct paciente));
            cout<<"introduzca el documento del corredor: ";
            cin>>aux->val;
            cout<<"Introduzca el nombre de corredor: ";
            cin>>aux->nombre;
            cout<<"cuantas vueltas dara el corredor:  "<< endl;
             cout<<endl;
             cout<<"REGISTRADOR DE VUELTAS"<<endl;
             cout<<"--------------------------"<<endl;
            cout<<"vuelta 1: "<<endl;
            cout<<"-->";
            cin>>aux->tiempo;
            cout<<"vuelta 2: "<<endl;
            cout<<"-->";
            cin>>aux->tiempo2;
            cout<<"vuelta 3: "<<endl;
            cout<<"-->";
            cin>>aux->tiempo3;

            aux->promedio=aux->tiempo+aux->tiempo2+aux->tiempo3/3;
            
            aux->sig=NULL;
            aux2=cab; 
            while (aux2->sig!=NULL)
            {
                aux2 = aux2->sig;
            }
            aux2->sig =aux;
            aux2=aux=NULL;
            free(aux);
            free(aux2);                    
        }
    return 0;
}

int mostar(){
     cout<<"CORREDORES REGISTRADOS"<<endl;
     cout<<"-----------------------"<<endl;
    for(aux=cab; aux!=NULL; aux=aux->sig){
    cout<<"Numero de corredor: "<<aux->val<<endl;
    cout<<"Nombre de corredor: "<<aux->nombre<<endl;
    cout<<" vuelta 1 :   "<<aux->tiempo<<endl;
    cout<<" vuelta 2 :   "<<aux->tiempo2<<endl;
    cout<<" vuelta 3 :   "<<aux->tiempo3<<endl;
    cout<<" PROMEDIO DE VUELTAS: "<<aux->promedio<<endl;
    cout<<"---------------------------"<<endl;
        
    }
    return 0;
}
int posiciones(){


    
}
int main(){
    int opc=0;
    do{
        cout<<" MENU "<<endl;
        cout<<"-------"<<endl;
        cout<<" (1) registrar corredores "<<endl;
        cout<<" (2) ver corredores"<<endl;
        cout<<" (3) ver posiciones "<<endl;
        cout<<" (4) salir"<<endl;
        cin>>opc;
        switch(opc){
            case 1: registrar();
            break;
            
            case 2: mostar();
            break;
            case 3 :mostar();
            break;

            case 4:
                   cout<<"SU SECION A ACABADO";
                   break;
            
            default:
            cout<<"opcion no validad";
            break;       
        }
        
    }while(opc != 4);
    {   
      
    }

    {
    
    }

 return 0;
}