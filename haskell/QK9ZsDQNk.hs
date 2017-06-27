checkOp :: Bool -> Bool -> Bool -> String -> Bool
checkOp b1 b2 b3 "AND" = b1 && b2 && b3
checkOp b1 b2 b3 "OR" = b1 || b2 || b3

main = do
  x <- getLine
  y <- getLine
  z <- getLine
  o <- getLine
  print (checkOp (read x) (read y) (read z) o)
