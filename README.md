# visual.h

Tiny single header C lib for simple ANSI escape codes usage. It's really simple, but can save you a little time and make your code look a bit nicer.

**There are no guaranties, that this lib will fully work in work in your terminal, please, test it out before using.**

**Also, please include stdio.h to make it work!**


---


### Usage

To apply an attribute, just format it into your message, for example: `printf(BOLD "Display bold text and reset.\n" RESET);`, or call a function.

Keep in mind, that when an attribute is set, it will be applied to everything, until reseted or disabled!

Use `RESET` and `RESETF()` to reset **everything**.

`CLEAR()` returns the terminal to the initial state.

* **Text attributes**
  * `BOLD`
  * `DIM`
  * `ITALIC`
  * `UNDER`
  * `BLINK`
  * `INVERSE`
  * `INVIS`
  * `STRIKE`

* **256 colors**
  * `FG_256(code)`
  * `BG_256(code)`

* **RGB colors**
  * `FG_RGB(r, g, b)`
  * `BG_RGB(r, g, b)`

* **Disable colors**
  * `FG_DISABLE()`
  * `BG_DISABLE()`

* **Resets**
  * `RESET`
  * `RESETF()`

* **Utilities**
  * `CLEAR()`
  * `OUTPUT_HIDE()`

* **Cursor**
  * `CURSOR_HIDE()`
  * `CURSOR_SHOW()`


---


### To Do
- [ ] Different clearing functions
- [ ] Custom attribute disabling
- [ ] Make function alternatives to vars and vice versa


---


**Note:** This lib was made in one day for my personal use, but i would love to make it good and safe in the near future. Please, give me your feedback and ideas if you want to!
