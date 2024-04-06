s = gets.to_s.split

=begin
複数行コメント
=end

if s[0] == "<"
    if s[1] == "="
        if s[-1] == ">"
            p "yes"
        elsif s[-1] != ">"
            p "No"
        end
    elsif s[1] != "="
        p "No2"
    end
elsif s[0] != "<"
    p "No1"
end

array = ["<", "="] # ここCの{}とかと違って[]なんすね

p array[1]


# これだとs[2]とかが=じゃなかったときに判定が正しくできない
# 他の人は正規表現を使っている