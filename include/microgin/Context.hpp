//
// Created by 林俊 on 2020/3/30.
//
#ifndef RESTPP_CONTEXT_HPP
#define RESTPP_CONTEXT_HPP

#include <memory>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/http/message.hpp>
#include <boost/beast/http/dynamic_body.hpp>
#include "restpp/Types.hpp"
#include "restpp/Dict.hpp"
#include <boost/beast/core.hpp>

namespace microgin {
  template <class Stream>
  struct send_lambda {
      Stream &stream_;
      bool &close_;
      boost::system::error_code &ec_;
      explicit
      send_lambda(
              Stream &stream,
              bool  &close,
              boost::system::error_code &ec): stream_(stream), close_(close),ec_(ec){

      }
      template <bool isRequest, class Body, class Fields>
      void
      operator()(boost::beast::http::message<isRequest, Body, Fields> &&msg) const {
            close_ = msg.need_eof();
            boost::beast::http::serializer<isRequest, Body, Fields> sr{msg};
            boost::beast::http::write(stream_,sr,ec_);
      }

  };
  class Context {
  public:
      typedef std::shared_ptr<Context> sptr;
      static sptr make(boost::asio::ip::tcp::socket &socket, bool &close, boost::system::error_code &ec);

      virtual void ParseGetParam() = 0
      virtual Dist
  };

}