#pragma once

#include "base.hpp"

namespace NAC {
    class TFileV1TagHandler : public TFileV1BaseHandler {
    public:
        void Handle(
            const std::shared_ptr<TFSMetaDRequest> request,
            const std::vector<std::string>& args
        ) override;
    };
}
