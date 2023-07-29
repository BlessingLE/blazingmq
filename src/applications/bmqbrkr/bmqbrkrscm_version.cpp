// Copyright 2023 Bloomberg Finance L.P.
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// bmqbrkrscm_version.cpp                                             -*-C++-*-
#include <bmqbrkrscm_version.h>

namespace BloombergLP {

#define STRINGIFY2(a) #a
#define STRINGIFY(a) STRINGIFY2(a)

#define BMQBRKRSCM_VERSION_STRING                                             \
    "BLP_LIB_BMQBRKR_" STRINGIFY(BMQBRKR_VERSION_MAJOR) "." STRINGIFY(        \
        BMQBRKR_VERSION_MINOR) "." STRINGIFY(BMQBRKR_VERSION_PATCH)

const char* bmqbrkrscm::Version::s_ident = "$Id: " BMQBRKRSCM_VERSION_STRING
                                           " $";
const char* bmqbrkrscm::Version::s_what = "@(#)" BMQBRKRSCM_VERSION_STRING;

const char* bmqbrkrscm::Version::BMQBRKRSCM_S_VERSION =
    BMQBRKRSCM_VERSION_STRING;
const char* bmqbrkrscm::Version::s_dependencies      = "";
const char* bmqbrkrscm::Version::s_buildInfo         = "";
const char* bmqbrkrscm::Version::s_timestamp         = "";
const char* bmqbrkrscm::Version::s_sourceControlInfo = "";

}  // This closes the enterprise namespace
