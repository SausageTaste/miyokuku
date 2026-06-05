#pragma once

#include "miyokuku/json_fwd.hpp"


namespace miyokuku {

    struct IExecutable {
        virtual Json exec(const Json& params) = 0;
    };

}  // namespace miyokuku
