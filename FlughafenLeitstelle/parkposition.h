#ifndef PARKPOSITION
#define PARKPOSITION

class Parkposition{
private:
    f Flugzeug;
public:
    cParkposition();
    bool belegen(Flugzeug f);
    bool freigeben(Flugzeug f);
    bool istFrei();
    String toString();
};


#endif // PARKPOSITION

