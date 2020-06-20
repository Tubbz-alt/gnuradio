/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(complex_to_imag.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0bfce7099bc7438e992f0cf95e067675)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/complex_to_imag.h>
// pydoc.h is automatically generated in the build directory
#include <complex_to_imag_pydoc.h>

void bind_complex_to_imag(py::module& m)
{

    using complex_to_imag = ::gr::blocks::complex_to_imag;


    py::class_<complex_to_imag,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<complex_to_imag>>(m, "complex_to_imag", D(complex_to_imag))

        .def(py::init(&complex_to_imag::make),
             py::arg("vlen") = 1,
             D(complex_to_imag, make))


        ;
}