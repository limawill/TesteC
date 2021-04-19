#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector <char> v_char; //Vector de char
vector <string> v_str; //Vector de strings
int v_int[1000]; //Vetor de inteiros

int main() {
    int n; //n = tamanho do vetor

    sort(v_char.begin(), v_char.end());
    //Soh ordenar n elementos
    sort(v_str.begin(), v_str.begin() + n);
    sort(v_int, v_int + n);
}