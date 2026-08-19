#ifndef ASCII_H
#define ASCII_H

/* ascii 0..127, one macro per codepoint. */

/* --- control chars (0-31) --- */
#define ASCII_NUL            0  /* (ctrl) */
#define ASCII_SOH            1  /* (ctrl) */
#define ASCII_STX            2  /* (ctrl) */
#define ASCII_ETX            3  /* (ctrl) */
#define ASCII_EOT            4  /* (ctrl) */
#define ASCII_ENQ            5  /* (ctrl) */
#define ASCII_ACK            6  /* (ctrl) */
#define ASCII_BEL            7  /* (ctrl) */
#define ASCII_BS             8  /* (ctrl) */
#define ASCII_TAB            9  /* (ctrl) */
#define ASCII_LF            10  /* (ctrl) */
#define ASCII_VT            11  /* (ctrl) */
#define ASCII_FF            12  /* (ctrl) */
#define ASCII_CR            13  /* (ctrl) */
#define ASCII_SO            14  /* (ctrl) */
#define ASCII_SI            15  /* (ctrl) */
#define ASCII_DLE           16  /* (ctrl) */
#define ASCII_DC1           17  /* (ctrl) */
#define ASCII_DC2           18  /* (ctrl) */
#define ASCII_DC3           19  /* (ctrl) */
#define ASCII_DC4           20  /* (ctrl) */
#define ASCII_NAK           21  /* (ctrl) */
#define ASCII_SYN           22  /* (ctrl) */
#define ASCII_ETB           23  /* (ctrl) */
#define ASCII_CAN           24  /* (ctrl) */
#define ASCII_EM            25  /* (ctrl) */
#define ASCII_SUB           26  /* (ctrl) */
#define ASCII_ESC           27  /* (ctrl) */
#define ASCII_FS            28  /* (ctrl) */
#define ASCII_GS            29  /* (ctrl) */
#define ASCII_RS            30  /* (ctrl) */
#define ASCII_US            31  /* (ctrl) */

/* --- punctuation (32-47) --- */
#define ASCII_SPACE         32  /* ' ' */
#define ASCII_EXCLAM        33  /* '!' */
#define ASCII_DQUOTE        34  /* '"' */
#define ASCII_HASH          35  /* '#' */
#define ASCII_DOLLAR        36  /* '$' */
#define ASCII_PERCENT       37  /* '%' */
#define ASCII_AMP           38  /* '&' */
#define ASCII_SQUOTE        39  /* ''' */
#define ASCII_LPAREN        40  /* '(' */
#define ASCII_RPAREN        41  /* ')' */
#define ASCII_STAR          42  /* '*' */
#define ASCII_PLUS          43  /* '+' */
#define ASCII_COMMA         44  /* ',' */
#define ASCII_MINUS         45  /* '-' */
#define ASCII_PERIOD        46  /* '.' */
#define ASCII_SLASH         47  /* '/' */

/* --- digits (48-57) --- */
#define ASCII_DIGIT_0       48  /* '0' */
#define ASCII_DIGIT_1       49  /* '1' */
#define ASCII_DIGIT_2       50  /* '2' */
#define ASCII_DIGIT_3       51  /* '3' */
#define ASCII_DIGIT_4       52  /* '4' */
#define ASCII_DIGIT_5       53  /* '5' */
#define ASCII_DIGIT_6       54  /* '6' */
#define ASCII_DIGIT_7       55  /* '7' */
#define ASCII_DIGIT_8       56  /* '8' */
#define ASCII_DIGIT_9       57  /* '9' */

/* --- punctuation (58-64) --- */
#define ASCII_COLON         58  /* ':' */
#define ASCII_SEMICOLON     59  /* ';' */
#define ASCII_LT            60  /* '<' */
#define ASCII_EQUALS        61  /* '=' */
#define ASCII_GT            62  /* '>' */
#define ASCII_QUESTION      63  /* '?' */
#define ASCII_AT            64  /* '@' */

/* --- uppercase (65-90) --- */
#define ASCII_UPPER_A       65  /* 'A' */
#define ASCII_UPPER_B       66  /* 'B' */
#define ASCII_UPPER_C       67  /* 'C' */
#define ASCII_UPPER_D       68  /* 'D' */
#define ASCII_UPPER_E       69  /* 'E' */
#define ASCII_UPPER_F       70  /* 'F' */
#define ASCII_UPPER_G       71  /* 'G' */
#define ASCII_UPPER_H       72  /* 'H' */
#define ASCII_UPPER_I       73  /* 'I' */
#define ASCII_UPPER_J       74  /* 'J' */
#define ASCII_UPPER_K       75  /* 'K' */
#define ASCII_UPPER_L       76  /* 'L' */
#define ASCII_UPPER_M       77  /* 'M' */
#define ASCII_UPPER_N       78  /* 'N' */
#define ASCII_UPPER_O       79  /* 'O' */
#define ASCII_UPPER_P       80  /* 'P' */
#define ASCII_UPPER_Q       81  /* 'Q' */
#define ASCII_UPPER_R       82  /* 'R' */
#define ASCII_UPPER_S       83  /* 'S' */
#define ASCII_UPPER_T       84  /* 'T' */
#define ASCII_UPPER_U       85  /* 'U' */
#define ASCII_UPPER_V       86  /* 'V' */
#define ASCII_UPPER_W       87  /* 'W' */
#define ASCII_UPPER_X       88  /* 'X' */
#define ASCII_UPPER_Y       89  /* 'Y' */
#define ASCII_UPPER_Z       90  /* 'Z' */

/* --- punctuation (91-96) --- */
#define ASCII_LBRACKET      91  /* '[' */
#define ASCII_BACKSLASH     92  /* '\' */
#define ASCII_RBRACKET      93  /* ']' */
#define ASCII_CARET         94  /* '^' */
#define ASCII_UNDERSCORE    95  /* '_' */
#define ASCII_BACKTICK      96  /* '`' */

/* --- lowercase (97-122) --- */
#define ASCII_LOWER_A       97  /* 'a' */
#define ASCII_LOWER_B       98  /* 'b' */
#define ASCII_LOWER_C       99  /* 'c' */
#define ASCII_LOWER_D      100  /* 'd' */
#define ASCII_LOWER_E      101  /* 'e' */
#define ASCII_LOWER_F      102  /* 'f' */
#define ASCII_LOWER_G      103  /* 'g' */
#define ASCII_LOWER_H      104  /* 'h' */
#define ASCII_LOWER_I      105  /* 'i' */
#define ASCII_LOWER_J      106  /* 'j' */
#define ASCII_LOWER_K      107  /* 'k' */
#define ASCII_LOWER_L      108  /* 'l' */
#define ASCII_LOWER_M      109  /* 'm' */
#define ASCII_LOWER_N      110  /* 'n' */
#define ASCII_LOWER_O      111  /* 'o' */
#define ASCII_LOWER_P      112  /* 'p' */
#define ASCII_LOWER_Q      113  /* 'q' */
#define ASCII_LOWER_R      114  /* 'r' */
#define ASCII_LOWER_S      115  /* 's' */
#define ASCII_LOWER_T      116  /* 't' */
#define ASCII_LOWER_U      117  /* 'u' */
#define ASCII_LOWER_V      118  /* 'v' */
#define ASCII_LOWER_W      119  /* 'w' */
#define ASCII_LOWER_X      120  /* 'x' */
#define ASCII_LOWER_Y      121  /* 'y' */
#define ASCII_LOWER_Z      122  /* 'z' */

/* --- punctuation + del (123-127) --- */
#define ASCII_LBRACE       123  /* '{' */
#define ASCII_PIPE         124  /* '|' */
#define ASCII_RBRACE       125  /* '}' */
#define ASCII_TILDE        126  /* '~' */
#define ASCII_DEL          127  /* (ctrl) */

#endif /* ASCII_H */
