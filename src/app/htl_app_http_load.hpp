#ifndef _htl_app_http_load_hpp
#define _htl_app_http_load_hpp

/*
#include <htl_app_http_load.hpp>
*/
#include <htl_app_http_base.hpp>

// for http task.
class StHttpTask : public StHttpBaseTask
{
public:
    StHttpTask();
    virtual ~StHttpTask();
protected:
    virtual int ProcessHttp();
};

#endif