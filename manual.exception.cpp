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
    catch (...)
    {
        // * jika selain integer maka blok ini akan di ekeskusi 
        cout << "default Pengecualian di ekesekusi " << endl;
    }
    return 0;
}