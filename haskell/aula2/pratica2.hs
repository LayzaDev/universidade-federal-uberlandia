--------------------Exercicio1----------------------
xor :: Bool -> Bool -> Bool
xor a b = (a || b) && not(a && b)

xor' :: Bool -> Bool -> Bool
xor' a b = a /= b

xor'' :: Bool -> Bool -> Bool
xor'' a b = if a == b then True else False

xor''' :: Bool -> Bool -> Bool 
xor''' a b
    |(a || b) = True
    |otherwise = False

--------------------Exercicio2----------------------

par :: Int -> Bool
par x 
    |mod x 2 == 0 = True
    |otherwise = False

--------------------Exercicio3----------------------

impar :: Int -> Bool
impar y
    |mod y 2 == 1 = True
    |otherwise = False

--------------------Exercicio4----------------------

maior :: Int -> Int -> Int
maior n1 n2
    |n1 > n2 = n1
    |otherwise = n2

menor :: Int -> Int -> Int
menor n1 n2 = if n1 < n2 then n1 else n2

--------------------Exercicio5----------------------

area :: Float -> Float 
area diametro = areaCirculo
    where
        areaCirculo = pi * diametro/2 * diametro/2

--------------------Exercicio6----------------------
        
numRaizes :: Int -> Int -> Int -> String
numRaizes a b c
    |delta > 0 = "A equacao possui duas raizes reais e distintas"
    |delta == 0 = "A equacao possui uma raiz real"
    |delta < 0 = "A equacao nao possui raizes reais"
    |otherwise = "Erro!"
    where
        delta = (b * b - 4 * a * c)

--------------------Exercicio7----------------------
menu :: IO ()

menu = do   putStr "Nome do aluno: \n"
            nome <- getLine
            putStr "Número da matricula: \n"
            matricula <- getLine
            putStr "Nota do aluno: \n"
            nota <- getLine
            putStr "Cadastro do aluno \n"
            putStrLn ("O nome eh " ++ nome ++ 
                " a matricula eh " ++ matricula ++ 
                " e a nota eh " ++ nota)