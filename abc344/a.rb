input = gets.chomp.split("|").map(&:to_s)

if input[0] != nil 
    puts input[0,2]
else 
    puts input
end