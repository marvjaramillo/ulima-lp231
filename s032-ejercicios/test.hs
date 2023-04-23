main = print(show (sumList [1, 2, 3]))


sumList [] = 0
sumList list (x : xs) = x + sumList(xs)