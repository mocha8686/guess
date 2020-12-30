#!/usr/bin/env lua
math.randomseed(os.time())
ans = math.floor(math.random() * 100)
guess = -1
score = 21

while (ans ~= guess) and (score > 0) do
	print("Guess the number between 1 - 100: ")
	guess = tonumber(io.read())

	if (guess == nil) then
		print("Not a number")
		goto continue
	end

	if (guess > ans) then
		print("Lower")
	elseif (guess < ans) then
		print("Higher")
	end

	score = score - 1
	::continue::
end

if (score > 0) then
	print("Correct")
	print("Score: " .. score)
else
	print("Answer: " .. ans)
end
