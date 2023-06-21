class Exam:
    def __init__(self, questions):
        self.questions = questions
        self.answers = []

    def add_answer(self, answer):
        self.answers.append(answer)

    def grade_exam(self):
        score = 0
        total_questions = len(self.questions)

        for i in range(total_questions):
            if self.answers[i] == self.questions[i]["correct_answer"]:
                score += 1

        percentage = (score / total_questions) * 100
        return score, percentage


# Example usage
questions = [
    {
        "question": "What is the capital of France?",
        "choices": ["A. London", "B. Paris", "C. Madrid", "D. Rome"],
        "correct_answer": "B"
    },
    {
        "question": "What is the largest planet in our solar system?",
        "choices": ["A. Jupiter", "B. Saturn", "C. Earth", "D. Mars"],
        "correct_answer": "A"
    },
    {
        "question": "Which programming language is often used for data analysis?",
        "choices": ["A. Java", "B. Python", "C. C++", "D. Ruby"],
        "correct_answer": "B"
    }
]

exam = Exam(questions)

for i, question in enumerate(questions):
    print(question["question"])
    for choice in question["choices"]:
        print(choice)
    answer = input("Your answer (enter A, B, C, or D): ")
    exam.add_answer(answer.upper())
    print()

score, percentage = exam.grade_exam()

print("Exam Results:")
print("Score:", score)
print("Percentage:", percentage, "%")
