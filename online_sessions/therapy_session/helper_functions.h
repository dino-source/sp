#include <iostream>
#include <string>
#include <vector>

void print(std::string const &patient_data, std::string const &delim);
void print(std::string const &message);
std::string get_string_from_user();
using PatientData = std::vector<std::string>;
using PatientProperties = std::vector<std::string>;
PatientData get_patient_data(PatientData &patient_properties);