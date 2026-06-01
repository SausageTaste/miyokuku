#include "miyokuku/argcheck.hpp"
#include "miyokuku/json.hpp"


int main() {
    miyokuku::Json json_obj = { { "key", "value" } };
    const auto key = miyokuku::get_member_str(json_obj, "key");
    const auto keya = miyokuku::get_member_str(json_obj, "keya");
    return 0;
}
