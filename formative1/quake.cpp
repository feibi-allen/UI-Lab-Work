// COMP2811 Coursework 1: Quake class

#include <stdexcept>
#include "quake.hpp"

using namespace std;


Quake::Quake(const string& tm, double lat, double lon, double dep, double mag):
  time(tm), latitude(lat), longitude(lon), depth(dep), magnitude(mag)
{
  if (latitude < -90.0 or latitude > 90.0){
    throw invalid_argument("Invalid lattitude");
  }
  if (longitude < -180.0 or longitude > 180.0){
    throw invalid_argument("Invalid longitude");
  }
  if (depth < 0.0){
    throw invalid_argument("Invalid depth");
  }
  if (magnitude < 0){
    throw invalid_argument("Invalid magnitude");
  }
}


ostream& operator<<(ostream& out, const Quake& quake)
{
  return out << "Time: " << quake.getTime()
             << "\nLatitude: " << quake.getLatitude() << " deg"
             << "\nLongitude: " << quake.getLongitude() << " deg"
             << "\nDepth: " << quake.getDepth() << " km"
             << "\nMagnitude: " << quake.getMagnitude() << endl;
}
