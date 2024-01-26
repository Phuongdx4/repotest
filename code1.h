#pragma once
#include <vector>

enum employee_t{
    INTERN = 2,
    FRESHER = 1,
    EXPERIENCE = 0,
};

class Certificated
{
private:
    string CertificateName;
    string CertificatedID;
    string CertificateRank;
    string CertificatedDate;
public:
    Certificated(string CertificateName,string CertificatedID,string CertificateRank,string CertificatedDate);
    void add_certificated(string name, string id, string rank, string date);
    void show();

};


class Employee 
{
private:
    int id;
    string fullName;
    string birthday;
    string phone;
    string email;
    employee_t type;
    static size_t employye_count;
    vector<Certificated> cer;

public:
    Employee(int id, string fullName,string birthday,string phone ,string email,employee_t type,vector<Certificated> cer);
    virtual void show_infor();
    
};


void check();