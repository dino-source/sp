#ifndef HW_FRAMEWORK_H
#define HW_FRAMEWORK_H

#include "common_types.h"

namespace cpps::helper_library::hw::utilities
{
    uint get_number_of_exercises_in_chapter(uint chapter);
} // namespace cpps::helper_library::hw::utilities

namespace cpps::helper_library::hw::types
{
    struct Solution
    {
        Solution();
        Solution(uint ch, uint ex);

        void set_chapter(uint chapter) { m_chapter = chapter; }
        uint chapter() { return m_chapter; }

        void set_exercise(uint exercise) { m_exercise = exercise; }
        uint exercise() { return m_exercise; }

        void show_task_description() const;
        void run_solution() const;

    private:
        uint m_chapter{2u};
        uint m_exercise{1u};
    };

} // namespace cpps::helper_library::hw::types

#endif // !HW_FRAMEWORK_H
