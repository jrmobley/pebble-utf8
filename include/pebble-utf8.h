
#pragma once

/**
 * Decode the next byte of a UTF-8 byte stream.
 * Initialize state to 0 the before calling this function for the first
 * time for a given stream.  If the returned value is 0, then cp has been
 * set to a valid code point.  Other return values indicate that a multi-
 * byte sequence is in progress, or there was a decoding error.
 *
 * @param byte the byte to decode.
 * @state the current state of the decoder.
 * @cp the decoded unitcode code point.
 * @return the state of the decode process after decoding the byte.
 */
uint16_t utf8_decode_byte(uint8_t byte, uint16_t* state, uint16_t* cp);

/**
 * Convert a UTF-8 encoded string to upper case.  The string is converted
 * in place, and the length of the string will not change.
 * Only lower case characters in the Basic Latin (0000 ~ 07FF)
 * and Latin-1 Supplement (0080 ~ 00FF) blocks are converted.
 * In other words, this function performs the following conversions:
 *    a~z -> A~Z
 *    à~ö -> À~Ö
 *    ø~þ -> Ø~Þ
 */
void utf8_str_to_upper(char* s);

/**
 * Convert a UTF-8 encoded string to lower case.  The string is converted
 * in place, and the length of the string will not change.
 * Only upper case characters in the Basic Latin (0000 ~ 07FF)
 * and Latin-1 Supplement (0080 ~ 00FF) blocks are converted.
 * In other words, this function performs the following conversions:
 *    A~Z -> a~z
 *    À~Ö -> à~ö
 *    Ø~Þ -> ø~þ
 */
void utf8_str_to_lower(char* s);
