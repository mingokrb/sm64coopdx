#pragma once

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

/* utility for implementation of "universal" variants */
#define pluto_uwrap(L, f, r)                                                                           \
    auto old = setlocale(LC_ALL, nullptr);                                                             \
    setlocale(LC_NUMERIC, "en_US.UTF-8");                                                              \
    int narg = lua_gettop(L);                                                                          \
    lua_pushcfunction(L, f);                                                                           \
    lua_insert(L, 1);                                                                                  \
    int status = lua_pcall(L, narg, r, 0);                                                             \
    if (status != LUA_OK) {                                                                            \
        setlocale(LC_ALL, old);                                                                        \
        lua_error(L);                                                                                  \
    }                                                                                                  \
    setlocale(LC_ALL, old);                                                                            \
    return r;