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
    void run_solution() const; // TODO: implement this member function

private:
    unsigned m_chapter{2u};
    unsigned m_exercise{1u};
};

#endif // !HW_FRAMEWORK_H
