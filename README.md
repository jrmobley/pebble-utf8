# pebble-utf8

Functions for working with UTF-8 strings.

    uint16_t utf8_decode_byte(uint8_t byte, uint16_t* state, uint16_t* cp);
    void utf8_str_to_upper(char* s);
    void utf8_str_to_lower(char* s);

Please see the [header file](include/pebble-utf8.h) for details.
