#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBodyRegionProtectionDefinition(py::module &m)
{
    py::class_< UBodyRegionProtectionDefinition,  UGBXDefinition   >(m, "UBodyRegionProtectionDefinition")
		.def_static("StaticClass", &UBodyRegionProtectionDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BodyHitRegion", &UBodyRegionProtectionDefinition::BodyHitRegion)
        .def_readwrite("DamageModifierPercent", &UBodyRegionProtectionDefinition::DamageModifierPercent)
        .def_readwrite("DamageImpactEffects", &UBodyRegionProtectionDefinition::DamageImpactEffects)
        .def_readwrite("PercentOfMaxHealthLimit", &UBodyRegionProtectionDefinition::PercentOfMaxHealthLimit)
        .def_readwrite("PhysicalMaterial", &UBodyRegionProtectionDefinition::PhysicalMaterial)
          ;
}