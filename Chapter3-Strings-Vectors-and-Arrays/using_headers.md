**Code inside headers ordinarily should not use using declarations.**
The reason is that the contents of a `header` are copied into the including program’s
text. If a header has a `using` declaration, then every program that includes that
header gets that same `using` declaration. As a result, a program that didn’t intend to
use the specified library name might encounter unexpected name conflicts.