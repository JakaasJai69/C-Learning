# Operator Precedence in C++

To assist with parsing a compound expression, all operators are assigned a level of precedence. Operators with a higher **precedence** level are grouped with operands first.

| Prec | Assoc | Operator(s) | Description | Pattern |
|------|-------|-------------|-------------|---------|
| 1    | Lâ†’R   | `::`        | Global scope (unary)<br>Namespace scope (binary) | `::name`<br>`class_name::member_name` |
| 2    | Lâ†’R   | `() [] -> . ++ --`<br>`typeid` `const_cast` `dynamic_cast`<br>`reinterpret_cast` `static_cast`<br>`sizeof...` `noexcept` `alignof` | Function call<br>Post-increment/decrement<br>Member access<br>Various casts & type ops | `(expression)`<br>`function_name(args)`<br>`pointer[index]`<br>`object.member_name`<br>`object_ptr->member`<br>`typeid(expr)`<br>`const_cast<type>(expr)` |
| 3    | Râ†’L   | `+ - ++ -- ! not ~`<br>`(type)` `sizeof` `co_await`<br>`& * new delete` | Unary ops<br>Cast<br>New/delete<br>Logical/bitwise NOT<br>Await | `+expr`<br>`-expr`<br>`++var`<br>`--var`<br>`!expr`<br>`not expr`<br>`~expr`<br>`(new_type)expr`<br>`sizeof(expr)`<br>`&var`<br>`*ptr`<br>`new type`<br>`delete ptr` |
| 4    | Lâ†’R   | `->* .*`    | Member pointer selectors | `object_ptr->*member_ptr`<br>`object.*member_ptr` |
| 5    | Lâ†’R   | `* / %`     | Multiplication, Division, Remainder | `a * b`, `a / b`, `a % b` |
| 6    | Lâ†’R   | `+ -`       | Addition, Subtraction | `a + b`, `a - b` |
| 7    | Lâ†’R   | `<< >>`     | Bitwise shifts | `a << b`, `a >> b` |
| 8    | Lâ†’R   | `<=>`       | Three-way comparison (C++20) | `a <=> b` |
| 9    | Lâ†’R   | `< <= > >=` | Relational comparisons | `a < b`, `a >= b` |
| 10   | Lâ†’R   | `== !=`     | Equality, Inequality | `a == b`, `a != b` |
| 11   | Lâ†’R   | `&`         | Bitwise AND | `a & b` |
| 12   | Lâ†’R   | `^`         | Bitwise XOR | `a ^ b` |
| 13   | Lâ†’R   | `|`         | Bitwise OR | `a | b` |
| 14   | Lâ†’R   | `&&` `and`  | Logical AND | `a && b`, `a and b` |
| 15   | Lâ†’R   | `||` `or`   | Logical OR | `a || b`, `a or b` |
| 16   | Râ†’L   | `throw co_yield ?:`<br>`=` `*=` `/=` `%=` `+=`<br>`-=` `<<=` `>>=` `&=` `|=` `^=` | Throw/Yield<br>Conditional<br>Assignments | `throw expr`<br>`co_yield expr`<br>`a ? b : c`<br>`a = b`, `a += b`... |
| 17   | Lâ†’R   | `,`         | Comma operator | `expr1, expr2` |