#pragma once

struct ipmi_reg_item {
    void (*__fn)(); 
};

#define DECLARATION_IPMI_NETFN_FUNC_REGISTER(fn)    \
    void fn(); \
    static const struct ipmi_reg_item \
     __attribute__((__section__(".ipmi_netfn_register"))) __attribute__((__used__)) \
    __ipmi_netfn_reg_##fn = {.__fn = &(fn)}
