numRaizes :: Float -> Float -> Float -> String
numRaizes a b c
    |delta > 0 = "2"
    |delta == 0 = "1"
    |otherwise = "Nao ha raizes"
   where
    delta = b*b - 4*a*c

-------------- if let ------------------
    
numRaizes' :: Float -> Float -> Float -> String
numRaizes' a b c = let delta = b*b - 4*a*c
                     in if delta > 0 
                      then "2 raizes" 
                        else if delta == 0 
                            then "1 raiz"
                               else "O raizes"

-------------- V ou F ------------------  
par :: Int -> Bool
par num
    |mod num 2 == 0 = True
    |otherwise = False     
    
impar :: Int -> Bool
impar num = if par num then False else True

impar' :: Int -> Bool
impar' num = not (par num)

--------------Triangulo--------------------
{--classTriangulo :: Float -> Float -> Float -> String
classTriangulo a b c
  |possivel = if a == b && b == c 
                then "Triangulo Equilatero"
                  else if a == b /= c || b == c /= a || c == a /= b 
                    then "Triangulo Isosceles"
                      else if a /= b && b /= c && c /= a 
                        then "Triangulo Escaleno"
  |otherwise = "Não eh triangulo"
  where 
  possivel = a > 0 && b > 0 && c > 0 && a + b < c && b + c < a && c + a < b --}
    
-----------Maior Menor ----------------
maior :: Float -> Float -> String
maior a b = let somaQuadrados = ((a * a) + (b * b))
                quadradoDaSoma = ((a + b) * (a + b))
                in if somaQuadrados > quadradoDaSoma 
                    then "O maior eh a Soma dos Quadrados"
                      else "O maior eh o Quadrado da Soma"

----------Valor absoluto ------------------
valorAbsoluto :: Int -> Int 
valorAbsoluto n = if n >= 0 then n else -n

--------Aninhamento ----------------------

sinal :: Int -> Int
sinal n = if n < 0
            then -1
              else if n == 0
                then 0
                  else 1

------------ guardas -----------------

vabs :: (Num a, Ord a) => a -> a 
vabs n | n >= 0 = n
       | n < 0 = -n