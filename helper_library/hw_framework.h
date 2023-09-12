#ifndef HW_FRAMEWORK_H
#define HW_FRAMEWORK_H

struct Solution
{
    Solution();
    Solution(unsigned ch, unsigned ex);

    void set_chapter(unsigned chapter) { m_chapter = chapter; }
    unsigned chapter() { return m_chapter; }

    void set_exercise(unsigned exercise) { m_exercise = exercise; }
    unsigned exercise() { return m_exercise; }

    void show_task_description() const;
    void run_solution() const;

private:
    unsigned m_chapter{2u};
    unsigned m_exercise{1u};
    void choose_exercise_in_chapter02() const;
    void choose_exercise_in_chapter03() const;
    void choose_exercise_in_chapter04() const;
    void choose_exercise_in_chapter05() const;
};

#endif // !HW_FRAMEWORK_H
