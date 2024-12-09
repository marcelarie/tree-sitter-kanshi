; Highlight profile name
(profile
  (identifier) @function)

; Highlight strings
(string) @string

; Highlight comments
(comment) @comment

;; Keywords for configuration options
((mode (keyword)) @keyword)
((position (keyword)) @keyword)
((scale (keyword)) @keyword)

((enable) @keyword)
((disable) @keyword)

;; Values for mode, position, and scale are typically numeric/dimensional
((mode (value)) @number)
((position (value)) @number)
((scale (value)) @number)


