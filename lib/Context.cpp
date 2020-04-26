//
// Created by 林俊 on 2020/4/6.
//
#include "microgin/Context.hpp"
#include <boost/algorithm/string.hpp>
#include <boost/tokenizer.hpp>

namespace microgin{
    static const char *arg_delim = "&";
    static const  char *pair_delim = "=";
    class ContextImpl: public Context {
    public:
        ContextImpl(boost::asio::ip::tcp::socket &socket, bool &close, boost::system::error_code &ec): _socket(socket), _close(close), _ec(ec){};
        void  ShouldBindJSON(json &json) override;
        void  JSON(int status, const json &json) override;
        void ParseGetParam() override;

        Dict<std::string, std::string> &GetParams() override;

    private:
        void set_parameter(boost::string_view param) override ;
        void set_target(boost::string_view target) override;
        void set_version(unsigned int version) override ;
        void set_keep_alive(bool keep_alive) override ;
        void set_body(boost::)


    private:
        std::string _target;
        std::string _body;
        std::string _parameter;
        bool  _keep_alive{};
        unsigned int _version{};
        Dict<std::string, std::string> _get_dict;
        boost::asio::ip::tcp::socket &_socket;
        bool  &_close;
        boost::system::error_code &_ec;

    };



}
