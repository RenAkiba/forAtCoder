n = gets.to_i
array = n.times.map{gets.split.map(&:to_i)}

for i in 1..n do
    puts array[i] * array[i+1]
end