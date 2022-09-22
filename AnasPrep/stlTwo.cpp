
#include <map>
using my_map_t = std::map<std::string, std::vector<double>>;


double printVectorSum(std::vector<double> values){
    double sum = 0;
    for (double currentValue: values) {
        sum += currentValue;
    }
    return sum;
}

my_map_t prepareSensorMap(){
    my_map_t sensorMap;

    vector<double> sensorOneValues{5,4,2.3,6};
    vector<double> sensorTwoValues{4,1,2.1,6.7};

    sensorMap.insert(pair<std::string,vector<double>>("Sensor1",sensorOneValues));
    sensorMap.insert(pair<std::string,vector<double>>("Sensor2",sensorTwoValues));

    return sensorMap;
}

void PrintSums(const my_map_t& map) {

     my_map_t::const_iterator itr;

    for (itr = map.begin(); itr != map.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << printVectorSum(itr->second)
             << endl;
    }
    cout << endl;
}