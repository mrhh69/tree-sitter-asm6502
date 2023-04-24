
(opcode) @function.builtin
(num_literal) @number
(register) @constant.builtin
(operator) @operator

(local_label) @variable
(global_label) @variable

(directive) @operator
(file_name) @string
(section_name) @constant

(immediate
  "#" @operator ;@punctuation.special
)
(indirect
  "(" @operator
  ")" @operator
)

;(ERROR) @error
(comment) @comment
