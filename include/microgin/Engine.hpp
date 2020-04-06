//
// Created by 林俊 on 2020/4/05.
//
#ifndef MICROGIN_ENGINE_HPP
#define MICROGIN_ENGINE_HPP

#include <memory>
#include <functional>
#include <thread>
#include "microgin/Config.h"
#include "microgin/Context.hpp"

namespace  microgin {
    class MICROGIN_API Engine{
    public:
        typedef std::share_ptr<Engine> sptr;
        typedef std::string path_type;
        typedef std::function<void (Context::sptr &ctx)> Handler;
        virtual void Run(const std::string &args) = 0;
        virtual void Get(const path_type &path, Handler handler) = 0;
        virtual void POST(const path_type &path, Handler handler) = 0;
        virtual void StaticFile(const path_type &path, const std::string &filename) = 0;
        virtual void Static (const path_type &path, const std::string &dir ) = 0;
        static sptr make();
    };
}


#endif //