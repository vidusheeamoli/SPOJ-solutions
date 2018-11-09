t = int( raw_input( ) )
while t :
    n = int( raw_input( ) )
    a = ( 2 ** ( n + 1 ) - 1 ) % 1298074214633706835075030044377087
    print a
    t = t - 1