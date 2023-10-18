{-# LANGUAGE ScopedTypeVariables #-}

module scanToken where

import Control.Monad.ST
import Data.STRef

data Scanner s = Scanner
    { startRef :: STRef s Int
    , currentRef :: STRef s Int
    , line :: Int
    }

initScanner :: String -> ST s (Scanner s)
initScanner source = do
    startRef' <- newSTRef 0
    currentRef' <- newSTRef 0
    return $ Scanner startRef' currentRef' 1

isAlpha :: Char -> Bool
isAlpha c = ( c >= 'a' && c <= 'z') ||
			( c >= 'A' && c <= 'Z' )  ||
			c == '_'

isDigit :: Char -> Bool
isDigit c = ( c >= '0' && c <= '9')

isAtEnd :: Scanner -> Bool 
isAtEnd scanner = ( current scanner == "\0" ) 

advance :: Scanner -> (Char, Scanner)
advance scanner = (previousChar, scanner { current = tail (current scanner) })
	where 
		previousChar = head( current scanner )

-- first and second arrows are inputs
-- final value Token is output
makeToken :: TokenType -> Scanner -> Token 
makeToken tokenType scanner = Token 
	{ tokenType = tokenType
	, start = start scanner
	, length = fromIntegral (length ( current scanner ) - length ( start scanner ))
	, line = line scanner
	}

scanToken :: Scanner -> Token
scanToken = ...

main :: IO () 
main = do 
	let source = "1 * 2"
	let scanner = initScanner source 
	print scanner