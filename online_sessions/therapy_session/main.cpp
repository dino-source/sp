#include "helper_functions.h"
#include "Patient.h"

int main()
{
    print("Hello! My name is Rob Ott. I am your virtual psychologist.\n"
          "The first step we have to do is to fill a questionnaire.\n"
          "It'll be a starting point in your therapy. So let's start.\n\n");
    Patient p;
    auto patient_data = p.get_patient_data();
}
