#indef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

Class Employee {
public:
    Employee(int id, const std::string &name, const std::string &department, double salary);
    
    int getID() const;

    std::string getName() const;
    void setName(const std::string &name);

    std::string getDepartment() const;
    void setDepartment(const std::string &department)

    double getSalary() const;
    void setSalary(double salary);

private:
    int id;
    std::string name;
    std::string department;
    double salary;

};

#endif