#include <stdio.h>
#include <iostream>

using namespace std;

int vet[5];
int resul[5];
int changer1;
int changer2=0;

int main(int argc, char const *argv[])
{
    

    cout << "Welcome to Bubble Sort" << endl;
    cout << "First choice 5 numbers to vector" << endl;
    
   for (int i = 0; i < 5; i++)
   {
       cin >> vet[i];
       resul[i] = vet[i];
   }
   
    cout << "Your vector is: " << endl;

   for (int i = 0; i < 5; i++)
   {
       if (i == 0)
       {
           cout << "[" << vet[i] << ", ";
       }else
       if (i == 4)
       {
           cout << vet[i] << " ]";
       }else{
           cout << vet[i] <<", ";
       }
            
   }
    
   /*Bubble Sort*/
    for (int i = 0; i < 4; i++)
    {
        if (/*vet[i] !=5 &&*/ vet[i] > vet[i+1])
        {
            cout << endl <<"changer" << i << endl;
            changer2 = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = changer2;
            
            /*vet[i] = changer2[1];
            vet[i+1] = vet[i];*/

            cout << vet[i] << " " <<  changer2 << endl;

            //write array
            for (int i = 0; i < 5; i++){
            if (i == 0)
            {
                cout << "[" << vet[i] << ", ";
            }else
            if (i == 4)
            {
                cout << vet[i] << " ]";
            }else{
                cout << vet[i] <<", ";
            }
                    
        }//end

        }
        
    }

    cout << "your array organized is :" << endl; 

    for (int i = 0; i < 5; i++)
   {
       if (i == 0)
       {
           cout << "[" << vet[i] << ", ";
       }else
       if (i == 4)
       {
           cout << vet[i] << " ]";
       }else{
           cout << vet[i] <<", ";
       }
            
   }
    


    return 0;
}


