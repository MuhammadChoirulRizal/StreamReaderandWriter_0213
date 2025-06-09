#include <iostream>
using namespace std;

int main ()
{
    try
    {
        {
            cout <<"selamat belajar di Prodi TI UMY "<< endl;
            throw ("Halo");
            cout << "Pernyataan tidak akan di eksekusi "<< endl;

        }
    }
    catch(int a)
    {
        // blok ini akan di eksekusi 
        cout << "Pengecualian akan di eksekusi " << endl;

    }
    
}