#include <iostream>
#include <stack>
using namespace std;
int main() {

 stack<string> pilha1;
 stack<string> pilha2;
 
  cout << "Pilha 1 antes das mudancas" << endl;
 pilha1.push("manga");
 cout << pilha1.top() << endl;
 pilha2.push(pilha1.top());
 pilha1.pop();
 pilha1.push("uva");
 cout << pilha1.top() << endl;
 pilha2.push(pilha1.top());
 pilha1.pop();
 pilha1.push("banana");
 cout << pilha1.top() << endl;
 pilha1.push("maca");
 cout << pilha1.top() << endl;
 pilha1.push("pera");
 cout << pilha1.top() << endl;
 pilha1.push("laranja");
cout << pilha1.top() << endl;

 cout << "###########" << endl;
 cout << "Pilha 2 antes das mudancas" << endl;
 pilha2.push("abacate");
 cout << pilha2.top() << endl;
 pilha2.push("mamao");
 cout << pilha2.top() << endl;
 pilha2.push("melancia");
 cout << pilha2.top() << endl;
 pilha2.push("kiwi");
 cout << pilha2.top() << endl;
 pilha2.push("morango");
 cout << pilha2.top() << endl;
 pilha1.push(pilha2.top());
 pilha2.pop();
 pilha2.push("abacaxi");
 cout << pilha2.top() << endl;
 pilha1.push(pilha2.top());
 pilha2.pop();
 
cout << "###########" << endl;
 

 cout << "Nova Pilha 1: ";
 while (!pilha1.empty()) {
   cout << pilha1.top() << " " << endl;;
   pilha1.pop();}
 cout << "Nova Pilha 2: ";
 while (!pilha2.empty()) {
   cout << pilha2.top() << " " << endl;;
   pilha2.pop();  
 }
 cout << endl;
 return 0;

}
