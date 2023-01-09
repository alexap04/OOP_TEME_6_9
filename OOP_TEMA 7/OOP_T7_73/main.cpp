#include <string>
#include <unordered_map>
using namespace std;
class Driver {
 public:
  Driver(const string& name) : name_(name) {}

  const string& getName() const { return name_; }

 private:
  string name_;
};

class Car {
 public:
  Car(const string& make, const string& model)
      : make_(make), model_(model) {}

  const string& getMake() const { return make_; }
  const string& getModel() const { return model_; }
  void setDriver(Driver* driver) { driver_ = driver; }
  const Driver* getDriver() const { return driver_; }

 private:
  string make_;
  string model_;
  Driver* driver_;
};

class CarDriverMap {
 public:
  void addCar(const string& make, const string& model,
              const string& driver_name) {
    Car* car = new Car(make, model);
    Driver* driver = new Driver(driver_name);
    car->setDriver(driver);
    cars_[car] = driver;
    drivers_[driver] = car;
  }

  void removeCar(const Car* car) {
    drivers_.erase(cars_[car]);
    cars_.erase(car);
  }

  void removeDriver(const Driver* driver) {
    cars_.erase(drivers_[driver]);
    drivers_.erase(driver);
  }

  void showAll() {
    for (const auto& [driver, car] : drivers_) {
      printf("Driver: %s, Car: %s %s\n", driver->getName().c_str(),
                  car->getMake().c_str(), car->getModel().c_str());
    }
  }

  int size() { return drivers_.size(); }

 private:
  unordered_map<const Car*, Driver*> cars_;
  unordered_map<const Driver*, Car*> drivers_;
};
