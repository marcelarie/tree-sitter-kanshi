; Highlight profile name
(profile
  (identifier) @function)

; Highlight strings
(string) @string

; Highlight comments
(comment) @comment

; Highlight keywords (e.g., "mode", "position", "scale")
(mode (keyword) @keyword)
(position (keyword) @keyword)
(scale (keyword) @keyword)

; Highlight values (e.g., numbers and coordinates)
(mode (value) @number)
(position (value) @number)
(scale (value) @float)

