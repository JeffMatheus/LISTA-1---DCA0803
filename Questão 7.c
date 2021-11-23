Resposta e justificativa de cada uma das expressões em seguida.
a) p = mat + 1: Válida. Neste caso, omite-se o operador de endereço. Esta operação significa que p recebe o endereço do segundo elemento do vetor. Isto se dá porque p aponta sempre para o primeiro elenmento. Assim, se incrementamos uma unidade, ele passa a apontar para o segundo.
b) p = mat++: Inválida. Neste caso não se pode incrementar utilizando o "++". Como alternativa, faz-se conforme a sintaxe de (a).
c) p = ++mat: Inválida. Ocorre que é inválida pelo mnesmo motivo do incremento anterior. Ademais, temos o incremento anterior à variável, o que não é permitido em sintaxe.
d) x = (*mat)++: Inválida. O operador de derreferência pode ser utilizado apenas quando precede uma variável do tipo ponteiro.