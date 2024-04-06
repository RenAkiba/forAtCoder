x = gets.to_f
x /= 10.0

if x < 0
    p x.ceil
elsif 0 <= x
    p x.round
end