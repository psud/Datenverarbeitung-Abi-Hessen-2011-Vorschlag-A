#ifndef FLUGHAFENLEITSTELLE
#define FLUGHAFENLEITSTELLE



class FlughafenLeitstelle {
private:
    bahn Landebahn[3];
    List<Flugzeug> Flugzeug;
    platz ParkPosition[5];
public:
    cFlughafenLeitstelle();
    Flugzeug sucheFlugzeug(QString flugNummer);
    bool anmeldenFlugzeug(QString flugNummer);
    bool zuweisenLandebahn(QString flugNummer, int bahn);
};


#endif // FLUGHAFENLEITSTELLE

