. = ALIGN(8);
__ipmi_netfn_register_array_start = .;
KEEP(*(SORT_BY_NAME(".ipmi_netfn_register*")))
__ipmi_netfn_register_array_end = .;
