#include <iostream>
#include <string>
using namespace std;
class AstroObjects
{
protected:
string name;
string age;
string distant;
public:
void ShowName()
{
cout<<name<<endl;
};
void ShowAge()
{
cout<<age<<endl;
}
void ShowDistant()
{
cout<<distant<<endl;
}
virtual void ShowFacts() = 0;
virtual void ShowDescription() = 0;
//virtual void ShowType() = 0;
//virtual void ShowAmount() = 0;
};

// Начало Алёниных классов

class Starlike : public AstroObjects{
};
class Hole : public Starlike{
public:
    Hole(){
        this->name="Hole From M87";
        this->age="unknown";
        this->distant="53 mln light years";
    }
    void ShowFacts() override{
        cout<<"Scientists made first picture of blackhole in whole histroy exactly of this one"<<endl<<endl;
    }
    void ShowDescription() override{
        cout<<"Supermassive black hole from M87's core"<<endl;
    }
};
class Nebula : public Starlike{
public:
    Nebula(){
        this->name="Blue Snowball";
        this->age="5 billion years";
        this->distant="~2000-6000 light years";
    }
    void ShowFacts() override{
        cout<<"Has one of the hottest stars in it's center"<<endl<<endl;
    }
    void ShowDescription() override{
        cout<<"Usual planetar nebula popular across astronomy amauters"<<endl;
    }
};
class Star : public Starlike{
};
class Giant : public Star{
public:
    Giant(){
        this->name="Betelgeuse";
        this->age="8 million years";
        this->distant="~500-600 light years";
    }
    void ShowFacts() override{
        cout<<"All the time changes it's radius and brightness, the second star we have picture of (after Sun)"<<endl<<endl;
    }
    void ShowDescription() override{
        cout<<"Very bright red supergiant, can be seen near Orion constellation"<<endl;
    }
};
class Neutron: public Star{
public:
    Neutron(){
        this->name="Calvera";
        this->age="285 thouthands years";
        this->distant="~6523 light years";
    }
    void ShowFacts() override{
        cout<<"The closest known isolated neutron star (i.e. without any star companions)"<<endl<<endl;
    }
    void ShowDescription() override{
        cout<<"Usual neutron star with spinning period of 59 milliseconds"<<endl;
    }
};
class Dwarf: public Star{
};
class YellowDwarf: public Dwarf{
public:
    YellowDwarf(){
        this->name="Alpha Centaury A";
        this->age="6 billion years";
        this->distant=" 4.36 light years";
    }
    void ShowFacts() override{
        cout<<"One of the components of Alpha Centaury triple system, can be seen in nightsky as one star with Alpha Centaury B"<<endl<<endl;
    }
    void ShowDescription() override{
        cout<<"Sunlike yellow dwarf in local star cluster"<<endl;
    }
};

class RedDwarf: public Dwarf{
public:
    RedDwarf(){
        this->name="Proxima Centaury";
        this->age="6 billion years";
        this->distant="4.2 light years";
    }
    void ShowFacts() override{
        cout<<"It was discovererd in 1915 by Innes, Robert Torbren, Eaton, the closest star to the Sun"<<endl<<endl;
    }
    void ShowDescription() override{
        cout<<"It's member of Alpha Centaur AB system and can't be seen in nightsky without any astronomical devices"<<endl;
    }
};

class BlackDwarf: public Dwarf{
public:
    BlackDwarf(){
        this->name="Unknown";
        this->age="1000000 billion years";
        this->distant="Unknown";
    }
    void ShowFacts() override{
        cout<<"You can't see it. It's theoretical model."<<endl<<endl;
    }
    void ShowDescription() override{
        cout<<"It's very old stars. They are cooled and therefore not emitting (or weakly emitting) in the visible range white dwarfs."<<endl;
    }
};

//Конец Алёниных классов

//Начало классов Вани

class StarClusters: public AstroObjects
{
protected:
    string AmountStars;

public:
    void ShowAmount()
    {
        cout << AmountStars;
    }

};

class SphericalClusters: public StarClusters
{
public:
    void ShowType()
    {
        cout << "spherical\n";
    }

};

class ScatteredClusters: public StarClusters
{
public:
    void ShowType()
    {
        cout << "scattered\n";
    }

};

class OmegaCentaur: public SphericalClusters
{


 public:

    OmegaCentaur()
    {
        this->name="Omega Centaur";
        this->age="none";
        this->distant="15 - 17 ly";
    }

    void ShowFacts()
    {
        cout << "It was discovered in ancient times..."<<endl<<endl;
    }

    void ShowDescription()
    {
        cout << "Standart spherical cluster"<<endl;
    }
};

class Tucan47: public SphericalClusters
{


 public:

    Tucan47()
    {
        this->name="47 Tucan";
        this->age="none";
        this->distant="14514 ly";
    }

    void ShowFacts()
    {
        cout << "It was discovered in 14th September in 1751 by Nicola Lui de Lakail"<<endl<<endl;
    }

    void ShowDescription()
    {
        cout << "Standart spherical cluster"<<endl;
    }
};


class WildGuses: public ScatteredClusters
{

 public:

    WildGuses()
    {
        this->name="Wild Guses";
        this->age="none";
        this->distant="6000 ly";
    }
    void ShowFacts()
    {
        cout << "It was discovered in 1681 in Berlin observatory"<<endl<<endl;
    }
    void ShowDescription()
    {
        cout << "Standart scattered cluster"<<endl;
    }
};
class Pleiades: public ScatteredClusters
{
 public:
    Pleiades()
    {
        this->name="Pleiades";
        this->age="115 million years";
        this->distant="440 ly";
    }
    void ShowFacts()
    {
        cout << "It was discovered in ancient times..."<<endl<<endl;
    }
    void ShowDescription()
    {
        cout << "It was named after the characters of Greek mythology"<<endl;
    }
};
//Конец классов Вани
class Galaxy : public AstroObjects
{
};
class SpiralGalaxy : public Galaxy
{
};
class ElipticGalaxy : public Galaxy
{
};
class QuasarGalaxy : public Galaxy
{
};
class WrongGalaxy : public Galaxy
{
};
class MilkyWay : public SpiralGalaxy
{
public:
    MilkyWay()
    {
        name="Milky Way";
        age="13.2 billion years";
        distant="about 26000 light years to the Core";
    }
    void ShowDescription()
    {
        cout << "An ordinary spiral galaxy, home for humanS" << endl;
    }
    void ShowFacts()
    {
        cout << "Spiral branches are really dangerous for developing life, but we happened to stay in between too branches of Milky Way" << endl << endl;
    }
};
class Andromeda : public SpiralGalaxy
{
public:
    Andromeda()
    {
        name="Andromeda";
        age="10.0 billion years";
        distant="2.5 million light years";
    }
    void ShowDescription()
    {
        cout << "Usual spiral galaxy, actually the biggest one in Local galaxy cluster" << endl;
    }
    void ShowFacts()
    {
        cout << "Andromeda is heading toward our galaxy and it is estimated that our galaxies would collide in about 4-5 billion years" << endl << endl;
    }
};
class M32 : public ElipticGalaxy
{
public:
    M32()
    {
        name="M32";
        age="2.0 billion years";
        distant="2.9 million light years";
    }
    void ShowDescription()
    {
        cout << "Small eliptical galaxy-companion of the Andromeda galaxy" << endl;
    }
    void ShowFacts()
    {
        cout << "Was possibly created 2 billion years ago after collision of Andromeda and another galaxy"<< endl << endl;
    }
};
class M87 : public ElipticGalaxy
{
public:
    M87()
    {
        name="M87";
        age="12-13 billion years";
        distant="54 million light years";
    }
    void ShowDescription()
    {
        cout << "Huge and massive eliptical galaxy with very active black hole in it's core" << endl;
    }
    void ShowFacts()
    {
        cout << "Scientists used M87's core to get first picture of a black hole" << endl << endl;
    }
};
class SMO : public WrongGalaxy
{
public:
    SMO()
    {
        name="Small Magelanic Cloud";
        age="10 billion years";
        distant="200 000 light years";
    }
    void ShowDescription()
    {
        cout << "Dwarf galaxy-companion of the Milky Way withou any regular structure" << endl;
    }
    void ShowFacts()
    {
        cout << "Named after Magelan, who witnessed it during his roundabout journey" << endl << endl;
    }
};
class ULAS_J1342_0928 : public QuasarGalaxy
{
public:
    ULAS_J1342_0928()
    {
        name="ULAS J1342+0928";
        age="about 13.2 billion years";
        distant="13.1 billion light years";
    }
    void ShowDescription()
    {
        cout << "Enormous galaxy with very active core" << endl;
    }
    void ShowFacts()
    {
        cout << "One of the farest quasars known to humankind" << endl << endl;
    }
};
class TON618 : public QuasarGalaxy
{
public:
    TON618()
    {
        name="TON618";
        age="about 12 billion years";
        distant="10.4 billion light years";
    }
    void ShowDescription()
    {
        cout << "Radioactive galaxy situated in Canis Venatici constellation" << endl;
    }
    void ShowFacts()
    {
        cout << "Gas in accretion disk is spinning at about 7000 km/s" << endl << endl;
    }
};
int main() {
    AstroObjects *AObj[] = {new Hole(), new Nebula(), new Giant(), new Neutron(), new YellowDwarf(), new RedDwarf(),
                            new BlackDwarf(), new OmegaCentaur(), new Tucan47(), new WildGuses(), new Pleiades(),
                            new MilkyWay(), new Andromeda(), new M32(), new M87(), new SMO(), new ULAS_J1342_0928(),
                            new TON618()}; //Создаём массив указателей со всеми объектами
    
    bool a = false;
    int n = 18;
    int selector = 100;
    cout << "Welcome to tiny astrological catalogue ADV!" << endl;
    while (int i = !0) {
        cout << "Type number to choose an option" << endl << "Show Galaxies --> 1" << endl
             << "Show star-sized objects --> 2" << endl << "Show Star Clusters --> 3" << endl
             << "Show random object --> 4" << endl << "Exit program --> Any other number" << endl;
        cin >> selector;
        switch (selector) {
            case 1: {
                cout << "Type number to choose an option" << endl << "Show Spiral galaxies --> 1" << endl
                     << "Show Eliptic galaxies --> 2" << endl << "Show Wrong Shape galaxies --> 3" << endl
                     << "Show Quasars --> 4" << endl;
                cin >> selector;
                switch (selector) {
                    case 1: {
                        cout << "Type number to choose and option" << endl << "Show Milky Way --> 12" << endl
                             << "Show Andromeda --> 13" << endl;
                        cin >> selector;
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 2: {
                        cout << "Type number to choose and option" << endl << "Show M32 --> 14" << endl
                             << "Show M87 --> 15" << endl;
                        cin >> selector;
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 3: {
                        cout << "Type number to choose and option" << endl << "Show Small Magelanic Cloud --> 16"
                             << endl;
                        cin >> selector;
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 4: {
                        cout << "Type number to choose and option" << endl << "Show ULAS_J1342_0928 --> 17" << endl
                             << "Show TON618 --> 18" << endl;
                        cin >> selector;
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    default:
                        cout << "Incorrect input" << endl;
                };
                break;
            };


            case 2: {
                cout << "Type number to choose an option" << endl << "Show Black Hole M87 --> 1" << endl
                     << "Show Blue Snowball Nebula --> 2" << endl << "Show stars --> 3" << endl;
                cin >> selector;
                switch (selector) {

                    case 1: {

                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 2: {

                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 3: {
                        cout << "Type number to choose an option" << endl << "Show Betelgause Supergiant --> 3" << endl
                             << "Show Calvera neutron star --> 4" << endl << "Show dwarf stars --> 5" << endl;
                        cin >> selector;
                        switch (selector)
                            case 3:
                                AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 4: {
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 5: {
                        cout << "Type number to choose an option" << endl
                             << "Show yellow dwarf Alpha Centaury A --> 5" << endl
                             << "Show red dwarf Proxima Centaury --> 6" << endl
                             << "Show hypothetical Black dwarf --> 7" << endl;
                        cin >> selector;
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    default:
                        cout << "Incorrect input" << endl;
                };
                break;
            };


            case 3: {
                cout << "Type number to choose an option" << endl << "Show Spherical Clusters --> 1" << endl
                     << "Show Scattered Clusters --> 2" << endl;
                cin >> selector;
                switch (selector) {

                    case 1: {

                        cout << "Type number to choose and option" << endl << "Show Omega Centaur --> 8"
                             << endl << "Show Tucan 47 --> 9" << endl;
                        cin >> selector;
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    case 2: {

                        cout << "Type number to choose and option" << endl << "Show Wild Guses --> 10"
                             << endl
                             << "Show Pleiades --> 11" << endl;
                        cin >> selector;
                        AObj[selector - 1]->ShowName();
                        AObj[selector - 1]->ShowAge();
                        AObj[selector - 1]->ShowDistant();
                        AObj[selector - 1]->ShowDescription();
                        AObj[selector - 1]->ShowFacts();
                        break;
                    }
                    default:
                        cout << "Incorrect input" << endl;
                };
                break;
            };
            default:
                a = true;
        };
        if(a)
            break;
    }
    return 0;
}

