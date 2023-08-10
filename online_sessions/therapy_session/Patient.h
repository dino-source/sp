#ifndef PATIENT_H
#define PATIENT_H
#include "common_types.h"

struct Patient
{
    PatientProperties patient_properties{
        "first name", "last name", "ID number", "phone number",
        "email", "occupation", "marital status", "date of birth"};
};

#endif