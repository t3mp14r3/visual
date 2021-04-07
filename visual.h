// Tiny single header C lib for simple ANSI escape codes usage.
// It's really simple, but can save you a little time and make
// your code look a bit nicer.
//
// Repository: github.com/t3mp14r3/visual
//
// Not all options can be set together
//
// To reset everything you can use RESET sequence of
// RESETF function
//
// There are no guranties, that this lib will fully work in
// work in your terminal, please, test it out before using.
//
// Also, please include stdio.h to make it work!

// Escape sequence for ANSI codes
#define ESCAPE "\x1b"

// Text attributes
// Keep in mind, that when an attribute is set, it will be
// applied to everything, until reseted.
#define BOLD    ESCAPE "[1m"
#define DIM     ESCAPE "[2m"
#define ITALIC  ESCAPE "[3m"
#define UNDER   ESCAPE "[4m"
#define BLINK   ESCAPE "[5m"
#define INVERSE ESCAPE "[7m"
#define STRIKE  ESCAPE "[8m"

// Text 256 colors
#define FG_256(code) printf(ESCAPE "[38;5;" #code "m")
#define BG_256(code) printf(ESCAPE "[48;5;" #code "m")

// Text RGB colors
#define FG_RGB(r, g, b) printf(ESCAPE "[38;2;" #r ";" #g ";" #b "m")
#define BG_RGB(r, g, b) printf(ESCAPE "[48;2;" #r ";" #g ";" #b "m")

// Disable colors
#define FG_DISABLE() printf(ESCAPE "[39m")
#define BG_DISABLE() printf(ESCAPE "[49m")

// Terminal utilities
#define CLEAR() printf(ESCAPE "c")
#define RESET   ESCAPE "[0m" ESCAPE "[49m"
#define RESETF() printf(ESCAPE "[0m" ESCAPE "[49m")
#define OUTPUT_HIDE() printf(ESCAPE "^")

// Cursor attributes
#define CURSOR_HIDE() printf(ESCAPE "[?25l")
#define CURSOR_SHOW() printf(ESCAPE "[?25h")
