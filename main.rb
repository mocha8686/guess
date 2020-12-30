#!/usr/bin/env ruby
srand()
ans = (rand() * 100).floor
guess = -1
score = 21
while guess != ans && score > 0
	puts "Guess the number between 1 - 100"
	guess = gets.chomp
	begin
		guess = Integer(guess)
	rescue ArgumentError
		puts "Not a number"
		next
	end

	if guess > ans
		puts "Lower"
	elsif guess < ans
		puts "Higher"
	end
	
	score -= 1
end

if score > 0
	puts("Correct")
	puts("Score: #{score}")
else
	puts("Answer: #{ans}")
end
