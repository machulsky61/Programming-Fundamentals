#include <vector>
#include <iostream>

using namespace std;

bool existePico(vector<int> v){
    bool res = false;
  if(v.size() <= 2){
      res = false;
  }
  for(int i = 1; i < v.size()-1; i++){
      if(v[i-1] < v[i] && v[i+1] < v[i]){
          res = true;}
      }
      return res;
  }
  
int main() {
    // Leo las entradas
    int n; //Longitud del vector a rotar
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }
    // Evaluo si el vector v esta ordenado
    bool res = existePico(v);
    // Imprimo la salida
    cout << (res?"True":"False");
    return 0;
}