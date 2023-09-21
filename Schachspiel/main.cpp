#include"cSchachfeld.h"

int main(){
    cSchachfeld* fin = new cSchachfeld('C',1,NILL);
    cSchachfeld* test = new cSchachfeld('E',6,NILL);
    do
    {
        test= test->Springerzug();
    } while (!Vergleich(test,fin));
    
    cout<<"\n*-*-*Ausgabe*-*-*\n";
    test->printList();
    ~cSchachfeld();

    return 0;
}