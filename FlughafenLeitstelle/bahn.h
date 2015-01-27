#ifndef BAHN_H
#define BAHN_H


class bahn
{
private:
    f Flugzeug;
    bool frei;
    QString bezeichnung;
public:
    cBahn(QString bezeichnung);
    void belegen(Flugzeug inF);
    bool freigeben(Flugzeug inF);
    bool istFrei();
    QString toString();
    ~bahn();
};

#endif // BAHN_H
