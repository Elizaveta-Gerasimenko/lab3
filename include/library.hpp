#ifndef NOTIFY_H
#define NOTIFY_H

#include <iostream>
#include <string>

namespace template_library {

    class NotifierBase {
    public:
        virtual ~NotifierBase() = default;
        virtual void Notify(const std::string& message) const = 0;
    };

    class SmsNotifier : public NotifierBase {
    public:
        SmsNotifier(const std::string& phone_number) : phone_number_(phone_number) {}
        void Notify(const std::string& message) const override;

    private:
        std::string phone_number_;
    };

    class EmailNotifier : public NotifierBase {
    public:
        EmailNotifier(const std::string& email) : email_(email) {}
        void Notify(const std::string& message) const override;

    private:
        std::string email_;
    };

} 

#endif