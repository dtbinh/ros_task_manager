#ifndef TASK_IDLE_H
#define TASK_IDLE_H

#include "task_manager_lib/MinimalTaskConfig.h"
#include "task_manager_lib/TaskDefinition.h"
using namespace task_manager_lib;

namespace task_manager_test {
    class TaskIdle : public TaskDefinitionWithConfig<MinimalTaskConfig,TaskIdle>
    {
        protected:
        public:
            TaskIdle(boost::shared_ptr<TaskEnvironment> env) : Parent("Idle","Do nothing",true,-1) {}
            virtual ~TaskIdle() {};

            virtual TaskIndicator configure(const TaskParameters & parameters) throw (InvalidParameter);

            virtual TaskIndicator initialise(const TaskParameters & parameters) throw (InvalidParameter);

            virtual TaskIndicator iterate();

            virtual TaskIndicator terminate();

    };
};

#endif // TASK_IDLE_H
