#pragma once

#include <memory>
#include <string>
#include <unordered_map>

#include "miyokuku/procedure.hpp"


namespace miyokuku {

    class ProcedureRegistry {

    public:
        std::unordered_map<std::string, std::unique_ptr<IExecutable>>
            stateless_;
    };

}  // namespace miyokuku
