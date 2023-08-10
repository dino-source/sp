#include "helper_functions.h"

int main()
{
    PatientProperties patient_properties{
        "first name", "last name", "ID number", "phone number",
        "email", "occupation", "marital status", "date of birth"};
    print("Hello! My name is Rob Ott. I am your virtual psychologist.\n"
          "The first step we have to do is to fill a questionnaire.\n"
          "It'll be a starting point in your therapy. So let's start.\n\n");
    PatientData patient_data = get_patient_data(patient_properties);
}
