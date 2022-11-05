--3. Escreva uma função para calcular o dobro de um número.
dobro :: Int -> Int 
dobro x = 2 * x

--4. Escreva uma função para quadruplicar um número, utilizando a função definida no item anterior.
quad :: Int -> Int 
quad x = (dobro x) * (dobro x)

--5. Escreva uma função soma2 x y que realiza a soma de dois números x e y.
soma2 :: Int -> Int -> Int
soma2 x y = x + y

--6. Com base na função soma2, implemente a função soma4 que calcula a soma de quatro números.
soma4 :: Int -> Int -> Int -> Int -> Int
soma4 x y z w = (soma2 x y) + z + w

--7. Implemente a seguinte função:misterio x y z w = soma2 (soma2 x y) (soma2 z w) 
    --Compare  a  saída  da função  misterio  com  a  saída  da  função  soma4  e  entenda  o  que aconteceu. 
    --Dica: Execute um caso passo-a-passo.

    --misterio :: Int -> Int -> Int -> Int -> Int
    --misterio x y z w = soma2 (soma2 x y) (soma2 z w) 
    
--8.  Implemente  a  função  hipotenusa  que,  a  partir  dos  dois  catetos  de  um  triângulo retângulo, 
    --fornece o valor da hipotenusa desse triângulo. 
    --Dica: utilize a função sqrt, que calcula a raiz quadrada de um número.

hip :: Float -> Float -> Float
hip cat1 cat2 = sqrt(cat1 * cat1 + cat2 * cat2)

  