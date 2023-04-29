https://www.hackerrank.com/challenges/ruby-enumerable-each-with-index/problem?isFullScreen=true




def skip_animals(animals, skip)
    # Your code here
      animals.map.with_index{|v,i| "#{i}:#{v}"}.drop(skip)
  end