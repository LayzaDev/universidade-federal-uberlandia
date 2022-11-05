----------------- EXERCICIO 1 ------------------

ordena2 :: Int -> Int -> (Int, Int)
ordena2 x y = if (x > y) then (y, x) else (x, y)

ordena2' :: Int -> Int -> (Int, Int)
ordena2' x y
    |x > y = (y, x)
    |otherwise = (x, y)

----------------- EXERCICIO 2 ------------------   

mes :: Int -> String
mes x
    | x == 1 = "Janeiro"
    | x == 2 = "Fevereiro"
    | x == 3 = "Marco"
    | x == 4 = "Abril"
    | x == 5 = "Maio"
    | x == 6 = "Junho"
    | x == 7 = "Julho"
    | x == 8 = "Agosto"
    | x == 9 = "Setembro"
    | x == 10 = "Outubro"
    | x == 11 = "Novembro"
    | x == 12 = "Dezembro"
    | otherwise = "Erro!"

mes' :: Int -> String
mes' x =
    case x of
        1 -> "Janeiro"
        2 -> "Fevereiro"
        3 -> "Marco"
        4 -> "Abril"
        5 -> "Maio"
        6 -> "Junho"
        7 -> "Julho"
        8 -> "Agosto"
        9 -> "Setembro"
        10 -> "Outubro"
        11 -> "Novembro"
        12 -> "Dezembro"
        _ -> "Erro!"

----------------- EXERCICIO 4 ------------------

-- Escreva uma função que receba dois argumentos e 
--    retorne o maior 
--    entre a soma dos quadrados dos argumentos e o quadrado da soma dos argumentos. 
    
    --Use a definição local
-- let.
