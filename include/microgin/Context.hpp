//
// Created by 林俊 on 2020/3/30.
//

#include <boost/beast/core.hpp>
namespace microgin {
  template <class Stream>
  struct send_lambda {
      Stream &stream_;
      bool &close_;
  };
}