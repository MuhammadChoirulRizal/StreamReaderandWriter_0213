#include <iostream>
#include <exception>

#include <array>
using namespace std;

int main()
{
    cout << "awal program " << endl;
    try
    {
        array<int, 3> data = {10, 20, 30};
        cout << data.at(4) << endl;
    }
    catch (exception &e)
    {
        // penangkap menggunakan obyek exception
        cout << e.what() << endl;

    }
    cout << "baris Program yang terakhir " << endl;
    return 0;
}