use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main() {
    let ans = rand::thread_rng().gen_range(1, 101);
    let mut score = 20;

    println!("Guess the number between 1-100:");

    while score > 0 {
        // Create guess
        let mut guess = String::new();

        // Read stdin into guess
        io::stdin().read_line(&mut guess)
            .expect("Failed to read line");

        // String -> u32 / continue if NaN
        let guess: i32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Not a number");
                continue;
            },
        };

        // Continue if guess is out of range
        if guess < 1 || guess > 100 {
            println!("Guess out of range 1-100.");
            continue;
        }


        // Break if correct, else say higher or lower
        match guess.cmp(&ans) {
            Ordering::Less => println!("Higher"),
            Ordering::Greater => println!("Lower"),
            Ordering::Equal => {
                println!("Correct");
                println!("Score: {}", score);
                break;
            },
        };

        score -= 1;
    }

    // Print answer if player lost
    if score == 0 {
        println!("Answer: {}", ans);
    }
}
