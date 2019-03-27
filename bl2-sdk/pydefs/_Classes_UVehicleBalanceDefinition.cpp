#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleBalanceDefinition(py::module &m)
{
    py::class_< UVehicleBalanceDefinition,  UBaseBalanceDefinition   >(m, "UVehicleBalanceDefinition")
		.def_static("StaticClass", &UVehicleBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIConstructObject", &UVehicleBalanceDefinition::VfTable_IIConstructObject)
        .def_readwrite("DefaultVehicle", &UVehicleBalanceDefinition::DefaultVehicle)
        .def_readwrite("DefaultExpLevel", &UVehicleBalanceDefinition::DefaultExpLevel)
        .def_readwrite("Grades", &UVehicleBalanceDefinition::Grades)
        .def("GetArchetypeForGrade", &UVehicleBalanceDefinition::GetArchetypeForGrade, py::return_value_policy::reference)
        .def("GetArchetypeForGameStage", &UVehicleBalanceDefinition::GetArchetypeForGameStage, py::return_value_policy::reference)
          ;
}