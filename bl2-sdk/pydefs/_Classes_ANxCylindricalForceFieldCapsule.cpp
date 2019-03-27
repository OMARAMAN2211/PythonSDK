#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxCylindricalForceFieldCapsule(py::module &m)
{
    py::class_< ANxCylindricalForceFieldCapsule,  ANxForceField   >(m, "ANxCylindricalForceFieldCapsule")
		.def_static("StaticClass", &ANxCylindricalForceFieldCapsule::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RenderComponent", &ANxCylindricalForceFieldCapsule::RenderComponent)
        .def_readwrite("RadialStrength", &ANxCylindricalForceField::RadialStrength)
        .def_readwrite("RotationalStrength", &ANxCylindricalForceField::RotationalStrength)
        .def_readwrite("LiftStrength", &ANxCylindricalForceField::LiftStrength)
        .def_readwrite("ForceRadius", &ANxCylindricalForceField::ForceRadius)
        .def_readwrite("ForceTopRadius", &ANxCylindricalForceField::ForceTopRadius)
        .def_readwrite("LiftFalloffHeight", &ANxCylindricalForceField::LiftFalloffHeight)
        .def_readwrite("EscapeVelocity", &ANxCylindricalForceField::EscapeVelocity)
        .def_readwrite("ForceHeight", &ANxCylindricalForceField::ForceHeight)
        .def_readwrite("HeightOffset", &ANxCylindricalForceField::HeightOffset)
        .def_readwrite("Kernel", &ANxCylindricalForceField::Kernel)
        .def("DoInitRBPhys", &ANxCylindricalForceFieldCapsule::DoInitRBPhys)
          ;
}