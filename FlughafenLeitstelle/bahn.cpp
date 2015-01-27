#include "bahn.h"


bahn::cbahn(String inBezeichnung)
{
bezeichnung = inBezeichnung;
}

bahn::~bahn()
{

}

void bahn::belegen(Flugzeug inF){
    frei = false;
    f = inF;
}

bool bahn::freigeben(Flugzeug inF){
    frei = true;
    f = inF;
}

bool bahn::istFrei(){
    return frei;
}

QString bahn::toString(){
    QString outStr = "Bezeichnung: "+ bezeichnung+", "
            +"frei: "+ frei ? "true":"false" + ", ";
            //+ All Info from Flugzeug

    return outStr;
}
