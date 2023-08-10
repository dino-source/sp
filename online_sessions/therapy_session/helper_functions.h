#include <string>
#include "common_types.h"

void print(std::string const &patient_data, std::string const &delim);
void print(std::string const &message);
std::string get_string_from_user();
PatientData get_patient_data(PatientData &patient_properties);