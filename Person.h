class Person{
    private:
    int age;
    std::string name;
    std::string email;
    public:
    Person(){}
    Person(const Person & obj);
    Person(int m_age,std::string m_name,std::string m_email);
    void setAge(int);
    void setName(std::string);
    void setEmail(std::string);
    int getAge();
    std::string getName();
    std::string getEmail();
    Person operator =(const Person& obj);
};