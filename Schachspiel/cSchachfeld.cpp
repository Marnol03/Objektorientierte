#include"cSchachfeld.h"

cSchachfeld::cSchachfeld(char x_in, int y_in, cSchachfeld* next_in ): prev(next_in){
    y= y_in;
    x=x_in;
    
}

bool Vergleich(cSchachfeld *s1,cSchachfeld *s2){
    if(s1->x==s2->x && s1->y== s2->y){
        cout<<"Bingo!!! das Pferd hat den König getötet";
        return true;     
    }
    else {
        return false;
    }
}
cSchachfeld::~cSchachfeld(){
    if(prev){
        cout<<"Destruktor: x->"<< x <<"y->"<< y<<endl;
        delete [] prev;
    }
}
void cSchachfeld::printList() {
	if (prev != NILL) {
		prev->printList();
	}
	cout << "Feld mit x = " << x << " und y = " << y << endl;
}
cSchachfeld* cSchachfeld::Springerzug(){
    cSchachfeld* p_help;
    char next_x; int next_y;
    cout << "Geben Sie die Koordinaten des naechsten Zuges des Springers ein (x y): ";
    cin >> next_x>> next_y;

    int xDiff = abs(next_x - x);
    int yDiff = abs(next_y - y);

    if(xDiff + yDiff == 3 && next_x >= 'A' && next_y >= 1 && next_x <= 'H' && next_y <= 8){
        cout<<"Dein Pferd ist jetzt auf: "<< next_x << next_y<< endl;
        p_help = new cSchachfeld(next_x, next_y, this);

        return p_help;
    }
    else{
        cout << "Ungueltiger Zug! Bitte geben Sie gueltige Koordinaten ein." << endl;
        
        return Springerzug();
    }	
};    