program lab02a;

var
    n, cont, n1, n2, suma : integer;
    
begin
    readln(n);
    cont := 0;
    repeat
        readln(n1);
        readln(n2);
        suma := n1 + n2;
        writeln(suma);
        cont := cont + 1;
    until n = cont;
end.
