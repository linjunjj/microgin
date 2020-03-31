//
// Created by 林俊 on 2020/3/30.
//

#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/http/message.hpp>
#include <boost/beast/http/dynamic_body.hpp>

namespace microgin {
  template <class Stream>
  struct send_lambda {
      Stream &stream_;
      bool &close_;
      boost::system
  };
}