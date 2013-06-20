/*
 * Internal macros
 *
 * Copyright (C) 2011-2012 Olaf Kirch <okir@suse.de>
 */

#ifndef __WICKED_DEBUG_H__
#define __WICKED_DEBUG_H__

#define NI_TRACE_ENTER() \
				ni_debug_dbus(3, "%s()", __FUNCTION__)
#define NI_TRACE_ENTER_ARGS(fmt, args...) \
				ni_debug_dbus(3, "%s(" fmt ")", __FUNCTION__, ##args)
#define NI_TP()			ni_debug_dbus(3, "TP - %s:%u", __FUNCTION__, __LINE__)

#undef  NI_TRACE_XPATH

#endif /* __WICKED_DEBUG_H__ */

