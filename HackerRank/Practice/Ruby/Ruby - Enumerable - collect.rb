https://www.hackerrank.com/challenges/ruby-enumerable-collect/problem?isFullScreen=true





def rot13(secret_messages)
    # your code here
      secret_messages.map { |message| message.tr('A-Za-z', 'N-ZA-Mn-za-m')}
  end