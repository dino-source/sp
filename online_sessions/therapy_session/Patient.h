#ifndef PATIENT_H
#define PATIENT_H
#include "common_types.h"
#include "helper_functions.h"

struct Patient
{
    PatientProperties patient_properties{
        "first name", "last name", "ID number", "phone number",
        "email", "occupation", "marital status", "date of birth"};

    inline PatientData get_patient_data()
    {
        PatientData patient_data;
        std::string delim = ": ";
        for (size_t i = 0; i < patient_properties.size(); i++)
        {
            print(patient_properties[i], delim);
            std::string user_input = get_string_from_user();
            patient_data.push_back(user_input);
        }
        return patient_data;
    }
};

#endif