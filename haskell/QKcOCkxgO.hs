isPrime :: Int -> Bool
isPrime num = if null [ x | x <- [2..(num-1)], num `mod` x == 0] then True else False

isCousin :: Int -> String
isCousin num =
  if (isPrime num)
    then if (isPrime num && isPrime (num+2))
      then "PRIMO CASADO!"
        else "PRIMO!"
    else "NAO PRIMO!"


main = do
  x <- getLine
  print (isCousin (read x))
