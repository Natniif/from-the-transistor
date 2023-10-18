module Token where 

data TokenType
    = TOKEN_LEFT_PAREN
    | TOKEN_RIGHT_PAREN
    | TOKEN_LEFT_BRACE
    | TOKEN_RIGHT_BRACE
    | TOKEN_COMMA
    | TOKEN_DOT
    | TOKEN_MINUS
    | TOKEN_PLUS
    | TOKEN_COLON
    | TOKEN_SEMICOLON
    | TOKEN_SLASH
    | TOKEN_STAR
    | TOKEN_BANG
    | TOKEN_BANG_EQUAL
    | TOKEN_EQUAL
    | TOKEN_EQUAL_EQUAL
    | TOKEN_GREATER
    | TOKEN_GREATER_EQUAL
    | TOKEN_LESS
    | TOKEN_LESS_EQUAL
    | TOKEN_IDENTIFIER
    | TOKEN_STRING
    | TOKEN_NUMBER
    | TOKEN_SWITCH
    | TOKEN_CASE
    | TOKEN_DEFAULT
    | TOKEN_BREAK
    | TOKEN_AND
    | TOKEN_CLASS
    | TOKEN_ELSE
    | TOKEN_FALSE
    | TOKEN_FOR
    | TOKEN_FUN
    | TOKEN_IF
    | TOKEN_NIL
    | TOKEN_OR
    | TOKEN_PRINT
    | TOKEN_RETURN
    | TOKEN_SUPER
    | TOKEN_THIS
    | TOKEN_TRUE
    | TOKEN_VAR
    | TOKEN_WHILE
    | TOKEN_ERROR
    | TOKEN_EOF
    deriving (Show, Eq)

data Token = Token
    { tokenType :: TokenType
    , start :: String
    , length :: Int
    , line :: Int
    }
    deriving (Show)
