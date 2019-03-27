#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimTank(py::module &m)
{
    py::class_< UWillowVehicleSimTank,  USVehicleSimTank   >(m, "UWillowVehicleSimTank")
		.def_static("StaticClass", &UWillowVehicleSimTank::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SteeringThresholdForStoppedTurns", &UWillowVehicleSimTank::SteeringThresholdForStoppedTurns)
        .def_readwrite("EngineDampingOnStoppedTurns", &UWillowVehicleSimTank::EngineDampingOnStoppedTurns)
          ;
}