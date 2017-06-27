isPerfect :: Int -> Bool
isPerfect num = sum [ y | y <- [1.. (round (sqrt num))], num `mod` y == 0] == num

main = do
  x <- getLine
  print (isPerfect (read x))
