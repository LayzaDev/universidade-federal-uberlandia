subtrair :: Float -> Float -> Float

subtrair a b = a - b

-----------------------------------------------------------

areaCirculo :: Float -> Float
areaCirculo diametro = areaC
        where 
            areaC = pi * diametro/2 * diametro/2

-----------------------------------------------------------

formula :: Bool -> Bool -> Bool
formula p q = (p || q) && not(p && q)