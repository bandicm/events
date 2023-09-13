#ifndef _EVENTS_
#define _EVENTS_

#include <iostream>
// #include <vector>
#include <map>
#include <string>
#include <functional>

using namespace std;

class event {
    map<string, function<void()>> events;
public:

    template <typename Func>
    void on(string name, Func fun) {
        events[name] = fun;
    }

//     template<typename... Args>
    void emit(string name/*, Args... arg*/) {
        if (events.find(name) == events.end()) {
            cout << "Not have defined lisener for event: " << name << endl;
            return;
        }
        else {
            events[name](/*arg...*/);
        }
    }
};

#endif

