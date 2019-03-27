#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIResourceExpressionEvaluator(py::module &m)
{
    py::class_< UAIResourceExpressionEvaluator,  UExpressionEvaluator   >(m, "UAIResourceExpressionEvaluator")
		.def_static("StaticClass", &UAIResourceExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Option", &UAIResourceExpressionEvaluator::Option)
        .def_readwrite("Resource", &UAIResourceExpressionEvaluator::Resource)
        .def("Evaluate", &UAIResourceExpressionEvaluator::Evaluate)
          ;
}