import time

questions = [
    {
        "question": "1. If 2x + 3 = 11, find x:",
        "options": ["A. 3", "B. 4", "C. 5", "D. 6"],
        "answer": "B"
    },
    {
        "question": "2. Find the next number: 2, 6, 12, 20, ?",
        "options": ["A. 28", "B. 30", "C. 32", "D. 36"],
        "answer": "B"
    },
    {
        "question": "3. Synonym of 'Rapid':",
        "options": ["A. Slow", "B. Quick", "C. Weak", "D. Silent"],
        "answer": "B"
    }
]

score = 0
time_limit = 60  # seconds
start_time = time.time()

print("===== Online Aptitude Test =====")
print("You have 60 seconds to complete the test.\n")

for q in questions:
    if time.time() - start_time > time_limit:
        print("\n⏰ Time's up!")
        break

    print(q["question"])
    for option in q["options"]:
        print(option)

    answer = input("Enter your answer (A/B/C/D): ").upper()

    if answer == q["answer"]:
        score += 1

    print()

print("===== Test Completed =====")
print("Your Score:", score, "out of", len(questions))
