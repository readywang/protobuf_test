#include<iostream>
#include<string>
#include"Person.pb.h"

using namespace HUST_Person;

int main(){
    Person person;
    person.set_name("wyl");
    person.set_gender(Person_Gender_BOY);
    person.set_age(25);
    person.set_id("M201870902");
    Person_Home *home=new Person_Home();
    home->set_country("china");
    home->set_province("gansu");
    home->set_county("minxian");
    home->set_addr("**xiang**cun");
    person.set_allocated_home(home);
    person.add_phone("12256783456");
    person.add_phone("11127222345");
    std::cout<<"序列化后："<<std::endl;
    std::string str=person.SerializeAsString();
    std::cout<<str<<std::endl;
    std::cout<<"反序列化后："<<std::endl;
    Person copyPerson;
    copyPerson.ParseFromString(str);
    std::cout<<copyPerson.name()<<std::endl;
    std::cout<<copyPerson.gender()<<std::endl;
    std::cout<<copyPerson.age()<<std::endl;
    std::cout<<copyPerson.id()<<std::endl;
    std::cout<<copyPerson.home().country()<<std::endl;
    std::cout<<copyPerson.home().province()<<std::endl;
    std::cout<<copyPerson.home().county()<<std::endl;
    std::cout<<copyPerson.home().addr()<<std::endl;
    int size=copyPerson.phone_size();
    for(int i=0;i<size;++i)
    {
        std::cout<<copyPerson.phone(i)<<std::endl;
    }
    return 0;
}