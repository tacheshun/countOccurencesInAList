//Bloc de sarcini 2
// Problema 5
#include <iostream>
#include <list>
using namespace std;

int numarAparitii(list<int> lista, int n, int x)
{
    int result = 0;
    list<int>::iterator it = lista.begin();
    for (it=lista.begin();it!=lista.end();it++)
        if (x == *it)
            result++;
            std::advance(it, 1);
    return result;
}

int main() {
    list<int> lista = {5, 7, 8, 8, 5, 8, 7, 6, 7, 7};
    list<int>::iterator it = lista.begin();

    int n = sizeof(lista);
    cout << "Lista originala: ";
    for (it=lista.begin();it!=lista.end();it++)
        cout << *it <<" ";
        std::advance(it, 1);

    cout <<"\nNumarul de aparitii al cifrei 8 este : " << numarAparitii(lista, n, 7);
    return 0;
}
