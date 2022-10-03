//
// Created by HoJoonEum on 2022/09/28.
//

#ifndef OOP_IIKH_WIN_SERVING_H
#define OOP_IIKH_WIN_SERVING_H

#include "string"

class Serving {
private:
    std::string name;
public:
    Serving(std::string serving_name);
    std::string getName();
    void setName(std::string new_name);
};


#endif //OOP_IIKH_WIN_SERVING_H
