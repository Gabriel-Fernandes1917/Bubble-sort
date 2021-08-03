#include <stdio.h>
#include <iostream>

using namespace std;

int vet[5];

int main(int argc, char const *argv[])
{
    

    cout << "Welcome to Bubble Sort" << endl;
    cout << "First choice 5 numbers to vector" << endl;
    
   for (int i = 0; i < 5; i++)
   {
       cin >> vet[i];
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
    for (int i = 0; i < 5; i++)
    {
        if (vet[i] > vet[i+1])
        {
            cout << endl <<"changer" << endl;
        }
        
    }
    


    return 0;
}


