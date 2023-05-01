#include <iostream>
#include <iomanip>

using namespace std;

int diasDelMes(int mes, int anio);
bool  esDiaMagico(int dia, int mes, int anio);

int main()
{ int anio;

  cout << "Ingrese anio: ";
  cin >> anio;
  cout <<"\n";
  for(int mes=1; mes<=12; mes++)
    for(int dia=1; dia<=diasDelMes(mes,anio); dia++)
      if( esDiaMagico(dia,mes,anio))
        cout << setw(5)<< dia << setw(5) << mes <<setw(5)<< anio<< "\n";
  return 0;
}


int diasDelMes(int mes, int anio)
{
  switch(mes)
  {
    case 1: return(31);
    case 2: if(anio%4==0)
              return 29;
            else
               return(28);
    case 3: return(31);
    case 4: return(30);
    case 5: return(31);
    case 6: return(30);
    case 7: return(31);
    case 8: return(31);
    case 9: return(30);
    case 10: return(31);
    case 11: return(30);
    case 12: return(31);
  }
}

bool  esDiaMagico(int dia, int mes, int anio)
{
  if( dia*mes == anio%100)
    return true;
  return false;
}