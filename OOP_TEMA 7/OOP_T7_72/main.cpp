#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Group {
 public:
  class Student {
   public:
    Student(string nume) : nume_(nume) {}
    const string& nume() const { return nume_; }
   private:
    string nume_;
  };

  void add_student(const Student& student) { students_.push_back(student); }

  void display() const {
    for (const Student& student : students_) {
      cout << student.nume() << endl;
    }
  }

 private:
  vector<Student> students_;
};

int main() {
  Group g;
  g.add_student(Group::Student("Andrei"));
  g.add_student(Group::Student("Denisa"));
  g.display();
  return 0;
}
