using namespace std;

// Base class
class Sensor {
public:
    Sensor(){};

    virtual double measure() const {return 0;};
};
// Derived class #1
class LaserScanner : public Sensor {
public:
    LaserScanner(){} ;
    double measure() const  {
        cout << "LaserScanner" << endl;
        return 1;
    }

};
// Derived class #2
class UltrasonicSensor : public Sensor {
public:
    UltrasonicSensor()= default;;
    double measure() const {
        cout << "UltrasonicSensor" << endl;
        return 2;
    }
};


void solutionOne(){
    LaserScanner scan;
    UltrasonicSensor uss;

    vector<Sensor*> sensors;

    sensors.push_back(&scan);
    sensors.push_back(&uss);

    for (const auto& sensor: sensors)
    {
        auto measurement = sensor->measure();
        cout << measurement << endl;
    }
};


void solutionTwo(){
    LaserScanner* scan = new LaserScanner();
    UltrasonicSensor* uss = new UltrasonicSensor();

    vector<Sensor*> sensors;
    sensors.push_back(scan);
    sensors.push_back(uss);

    for (const auto& sensor: sensors)
    {
        auto measurement = sensor->measure();
        cout << measurement << endl;
    }
    delete scan;
    delete uss;
}