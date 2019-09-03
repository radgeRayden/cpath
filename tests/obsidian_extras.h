#ifndef OBSIDIAN_EXTRAS_H
#define OBSIDIAN_EXTRAS_H

#define obs_test_path_eq(a, b) \
    obs_test_eq(a.len, b.len); \
    obs_test_strcmp(a.buf, b.buf);

#define obs_test_path_neq(a, b) \
    obs_test_neq(a.len, b.len); \
    obs_test_strcmp_false(a.buf, b.buf);

#define obs_test_path_eq_string(a, str) \
    obs_test_eq(a.len, cpath_str_length(CPATH_STR(str))); \
    obs_test_strcmp(a.buf, CPATH_STR(str));

#define obs_test_path_neq_string(a, str) \
    obs_test_neq(a.len, cpath_str_length(CPATH_STR(str))); \
    obs_test_strcmp_false(a.buf, CPATH_STR(str));

#endif