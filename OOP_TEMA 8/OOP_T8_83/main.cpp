#include <iostream>
#include <list>
using namespace std;
class Person {
 public:
  Person(int age) : age_(age) {}
  int getAge() const { return age_; }

 private:
  int age_;
};

class Car {
 public:
  Car(int age) : age_(age) {}
  int getAge() const { return age_; }

 private:
  int age_;
};

template <typename T>
double averageAge(const list<T>& objects) {
  double sum = 0;
  for (const T& obj : objects) {
    sum += obj.getAge();
  }
  return sum / objects.size();
}

int main() {
 list<Person> people;
  people.emplace_back(10);
  people.emplace_back(25);
  people.emplace_back(22);
  cout << "Average age of people is: " << averageAge(people) << endl;

  list<Car> cars;
  cars.emplace_back(9);
  cars.emplace_back(7);
  cars.emplace_back(26);
  cout << "Average age of cars is: " << averageAge(cars) << endl;

  return 0;
}
